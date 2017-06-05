/*
 * This file is part of libdom.
 * Licensed under the MIT License,
 *                http://www.opensource.org/licenses/mit-license.php
 * Copyright 2009 Bo Yang <struggleyb.nku@gmail.com>
 * Copyright 2014 Rupinder Singh Khokhar <rsk1coder99@gmail.com>
 */

#ifndef dom_internal_html_table_col_element_h_
#define dom_internal_html_table_col_element_h_

#include <dom/html/html_tablecol_element.h>
#include "html/html_element.h"


struct dom_html_table_col_element {
	struct dom_html_element base;
			/**< The base class */
};

/* Create a dom_html_table_col_element object */
dom_exception _dom_html_table_col_element_create(struct dom_html_document *doc,
		dom_string *tag_name, dom_string *namespace, dom_string *prefix,
		struct dom_html_table_col_element **ele);

/* Initialise a dom_html_table_col_element object */
dom_exception _dom_html_table_col_element_initialise(struct dom_html_document *doc,
		dom_string *tag_name, dom_string *namespace, dom_string *prefix,
		struct dom_html_table_col_element *ele);

/* Finalise a dom_html_table_col_element object */
void _dom_html_table_col_element_finalise(struct dom_html_table_col_element *ele);

/* Destroy a dom_html_table_col_element object */
void _dom_html_table_col_element_destroy(struct dom_html_table_col_element *ele);

/* The protected virtual functions */
dom_exception _dom_html_table_col_element_parse_attribute(dom_element *ele,
		dom_string *name, dom_string *value,
		dom_string **parsed);
void _dom_virtual_html_table_col_element_destroy(dom_node_internal *node);
dom_exception _dom_html_table_col_element_copy(dom_node_internal *old,
		                dom_node_internal **copy);

#define DOM_HTML_TABLE_COL_ELEMENT_PROTECT_VTABLE \
	_dom_html_table_col_element_parse_attribute

#define DOM_NODE_PROTECT_VTABLE_HTML_TABLE_COL_ELEMENT \
	_dom_virtual_html_table_col_element_destroy, \
	_dom_html_table_col_element_copy

#endif
