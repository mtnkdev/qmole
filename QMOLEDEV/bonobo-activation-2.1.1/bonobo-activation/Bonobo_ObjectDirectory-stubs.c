/*
 * This file was generated by orbit-idl-2 - DO NOT EDIT!
 */

#include <string.h>
#define ORBIT2_STUBS_API
#include "Bonobo_ObjectDirectory.h"

Bonobo_ServerInfoListCache* Bonobo_ObjectDirectory_get_servers(Bonobo_ObjectDirectory _obj, const Bonobo_CacheTime only_if_newer, CORBA_Environment *ev){
Bonobo_ServerInfoListCache* _ORBIT_retval;
gpointer _args[1];
_args[0] = (gpointer)&only_if_newer;
ORBit_c_stub_invoke (_obj, &Bonobo_ObjectDirectory__iinterface.methods, 0, &_ORBIT_retval, _args, NULL, ev, Bonobo_ObjectDirectory__classid, G_STRUCT_OFFSET (POA_Bonobo_ObjectDirectory__epv, get_servers),
(ORBitSmallSkeleton) _ORBIT_skel_small_Bonobo_ObjectDirectory_get_servers);

return _ORBIT_retval;
}
Bonobo_ServerStateCache* Bonobo_ObjectDirectory_get_active_servers(Bonobo_ObjectDirectory _obj, const Bonobo_CacheTime only_if_newer, CORBA_Environment *ev){
Bonobo_ServerStateCache* _ORBIT_retval;
gpointer _args[1];
_args[0] = (gpointer)&only_if_newer;
ORBit_c_stub_invoke (_obj, &Bonobo_ObjectDirectory__iinterface.methods, 1, &_ORBIT_retval, _args, NULL, ev, Bonobo_ObjectDirectory__classid, G_STRUCT_OFFSET (POA_Bonobo_ObjectDirectory__epv, get_active_servers),
(ORBitSmallSkeleton) _ORBIT_skel_small_Bonobo_ObjectDirectory_get_active_servers);

return _ORBIT_retval;
}
CORBA_string Bonobo_ObjectDirectory__get_username(Bonobo_ObjectDirectory _obj, CORBA_Environment *ev){
CORBA_string _ORBIT_retval;
ORBit_c_stub_invoke (_obj, &Bonobo_ObjectDirectory__iinterface.methods, 2, &_ORBIT_retval, NULL, NULL, ev, Bonobo_ObjectDirectory__classid, G_STRUCT_OFFSET (POA_Bonobo_ObjectDirectory__epv, _get_username),
(ORBitSmallSkeleton) _ORBIT_skel_small_Bonobo_ObjectDirectory__get_username);

return _ORBIT_retval;
}
CORBA_string Bonobo_ObjectDirectory__get_hostname(Bonobo_ObjectDirectory _obj, CORBA_Environment *ev){
CORBA_string _ORBIT_retval;
ORBit_c_stub_invoke (_obj, &Bonobo_ObjectDirectory__iinterface.methods, 3, &_ORBIT_retval, NULL, NULL, ev, Bonobo_ObjectDirectory__classid, G_STRUCT_OFFSET (POA_Bonobo_ObjectDirectory__epv, _get_hostname),
(ORBitSmallSkeleton) _ORBIT_skel_small_Bonobo_ObjectDirectory__get_hostname);

return _ORBIT_retval;
}
CORBA_Object Bonobo_ObjectDirectory_activate(Bonobo_ObjectDirectory _obj, const CORBA_char * iid, const Bonobo_ActivationContext ac, const Bonobo_ActivationEnvironment* environment, const Bonobo_ActivationFlags flags, CORBA_Context _ctx, CORBA_Environment *ev){
CORBA_Object _ORBIT_retval;
gpointer _args[4];
_args[0] = (gpointer)&iid;
_args[1] = (gpointer)&ac;
_args[2] = (gpointer)environment;
_args[3] = (gpointer)&flags;
ORBit_c_stub_invoke (_obj, &Bonobo_ObjectDirectory__iinterface.methods, 4, &_ORBIT_retval, _args, _ctx, ev, Bonobo_ObjectDirectory__classid, G_STRUCT_OFFSET (POA_Bonobo_ObjectDirectory__epv, activate),
(ORBitSmallSkeleton) _ORBIT_skel_small_Bonobo_ObjectDirectory_activate);

return _ORBIT_retval;
}
Bonobo_RegistrationResult Bonobo_ObjectDirectory_register_new(Bonobo_ObjectDirectory _obj, const CORBA_char * iid, const Bonobo_ActivationEnvironment* environment, const CORBA_Object obj, CORBA_Environment *ev){
Bonobo_RegistrationResult _ORBIT_retval;
gpointer _args[3];
_args[0] = (gpointer)&iid;
_args[1] = (gpointer)environment;
_args[2] = (gpointer)&obj;
ORBit_c_stub_invoke (_obj, &Bonobo_ObjectDirectory__iinterface.methods, 5, &_ORBIT_retval, _args, NULL, ev, Bonobo_ObjectDirectory__classid, G_STRUCT_OFFSET (POA_Bonobo_ObjectDirectory__epv, register_new),
(ORBitSmallSkeleton) _ORBIT_skel_small_Bonobo_ObjectDirectory_register_new);

return _ORBIT_retval;
}
void Bonobo_ObjectDirectory_unregister(Bonobo_ObjectDirectory _obj, const CORBA_char * iid, const CORBA_Object obj, CORBA_Environment *ev){
gpointer _args[2];
_args[0] = (gpointer)&iid;
_args[1] = (gpointer)&obj;
ORBit_c_stub_invoke (_obj, &Bonobo_ObjectDirectory__iinterface.methods, 6, NULL, _args, NULL, ev, Bonobo_ObjectDirectory__classid, G_STRUCT_OFFSET (POA_Bonobo_ObjectDirectory__epv, unregister),
(ORBitSmallSkeleton) _ORBIT_skel_small_Bonobo_ObjectDirectory_unregister);

}
