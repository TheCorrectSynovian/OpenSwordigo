/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005e06c4
 * Function: std::tr1::_Hashtable<std::pair<google::protobuf::MessageLite_const*,int>,std::pair<std::pair<google::protobuf::MessageLite_const*,int>const,google::protobuf::internal::ExtensionInfo>,std::allocator<std::pair<std::pair<google::protobuf::MessageLite_const*,int>const,google::protobuf::internal::ExtensionInfo>>,std::_Select1st<std::pair<std::pair<google::protobuf::MessageLite_const*,int>const,google::protobuf::internal::ExtensionInfo>>,std::equal_to<std::pair<google::protobuf::MessageLite_const*,int>>,google::protobuf::hash<std::pair<google::protobuf::MessageLite_const*,int>>,std::tr1::__detail::_Mod_range_hashing,std::tr1::__detail::_Default_ranged_hash,std::tr1::__detail::_Prime_rehash_policy,false,false,true>::_M_rehash
 * Signature: undefined __thiscall _M_rehash(_Hashtable<std::pair<google::protobuf::MessageLite_const*,int>,std::pair<std::pair<google::protobuf::MessageLite_const*,int>const,google::protobuf::internal::ExtensionInfo>,std::allocator<std::pair<std::pair<google::protobuf::MessageLite_const*,int>const,google::protobuf::internal::ExtensionInfo>>,std::_Select1st<std::pair<std::pair<google::protobuf::MessageLite_const*,int>const,google::protobuf::internal::ExtensionInfo>>,std::equal_to<std::pair<google::protobuf::MessageLite_const*,int>>,google::protobuf::hash<std::pair<google::protobuf::MessageLite_const*,int>>,std::tr1::__detail::_Mod_range_hashing,std::tr1::__detail::_Default_ranged_hash,std::tr1::__detail::_Prime_rehash_policy,false,false,true> * this, ulong param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* std::tr1::_Hashtable<std::pair<google::protobuf::MessageLite const*, int>,
   std::pair<std::pair<google::protobuf::MessageLite const*, int> const,
   google::protobuf::internal::ExtensionInfo>,
   std::allocator<std::pair<std::pair<google::protobuf::MessageLite const*, int> const,
   google::protobuf::internal::ExtensionInfo> >,
   std::_Select1st<std::pair<std::pair<google::protobuf::MessageLite const*, int> const,
   google::protobuf::internal::ExtensionInfo> >,
   std::equal_to<std::pair<google::protobuf::MessageLite const*, int> >,
   google::protobuf::hash<std::pair<google::protobuf::MessageLite const*, int> >,
   std::tr1::__detail::_Mod_range_hashing, std::tr1::__detail::_Default_ranged_hash,
   std::tr1::__detail::_Prime_rehash_policy, false, false, true>::_M_rehash(unsigned long) */

void __thiscall
std::tr1::
_Hashtable<std::pair<google::protobuf::MessageLite_const*,int>,std::pair<std::pair<google::protobuf::MessageLite_const*,int>const,google::protobuf::internal::ExtensionInfo>,std::allocator<std::pair<std::pair<google::protobuf::MessageLite_const*,int>const,google::protobuf::internal::ExtensionInfo>>,std::_Select1st<std::pair<std::pair<google::protobuf::MessageLite_const*,int>const,google::protobuf::internal::ExtensionInfo>>,std::equal_to<std::pair<google::protobuf::MessageLite_const*,int>>,google::protobuf::hash<std::pair<google::protobuf::MessageLite_const*,int>>,std::tr1::__detail::_Mod_range_hashing,std::tr1::__detail::_Default_ranged_hash,std::tr1::__detail::_Prime_rehash_policy,false,false,true>
::_M_rehash(_Hashtable<std::pair<google::protobuf::MessageLite_const*,int>,std::pair<std::pair<google::protobuf::MessageLite_const*,int>const,google::protobuf::internal::ExtensionInfo>,std::allocator<std::pair<std::pair<google::protobuf::MessageLite_const*,int>const,google::protobuf::internal::ExtensionInfo>>,std::_Select1st<std::pair<std::pair<google::protobuf::MessageLite_const*,int>const,google::protobuf::internal::ExtensionInfo>>,std::equal_to<std::pair<google::protobuf::MessageLite_const*,int>>,google::protobuf::hash<std::pair<google::protobuf::MessageLite_const*,int>>,std::tr1::__detail::_Mod_range_hashing,std::tr1::__detail::_Default_ranged_hash,std::tr1::__detail::_Prime_rehash_policy,false,false,true>
            *this,ulong param_1)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  void *__s;
  void *pvVar4;
  size_t __n;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  
  if (param_1 + 1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00665294();
  }
  __s = operator_new((param_1 + 1) * 8);
  __n = param_1 * 8;
  if (__n != 0) {
    memset(__s,0,__n);
  }
  *(undefined8 *)((long)__s + __n) = 0x1000;
  uVar5 = *(ulong *)(this + 0x10);
  if (uVar5 == 0) {
    pvVar4 = *(void **)(this + 8);
  }
  else {
    pvVar4 = *(void **)(this + 8);
    uVar6 = 0;
    do {
      while( true ) {
        plVar2 = (long *)((long)pvVar4 + uVar6 * 8);
        plVar7 = (long *)*plVar2;
        if (plVar7 == (long *)0x0) break;
        lVar9 = *plVar7;
        lVar8 = plVar7[1];
        *plVar2 = plVar7[6];
        uVar1 = lVar9 * 0xffff + (long)(int)lVar8;
        uVar3 = 0;
        if (param_1 != 0) {
          uVar3 = uVar1 / param_1;
        }
        lVar8 = (uVar1 - uVar3 * param_1) * 8;
        plVar7[6] = *(long *)((long)__s + lVar8);
        *(long **)((long)__s + lVar8) = plVar7;
        pvVar4 = *(void **)(this + 8);
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar5);
  }
  operator_delete(pvVar4);
  *(void **)(this + 8) = __s;
  *(ulong *)(this + 0x10) = param_1;
  return;
}


