/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005e0538
 * Function: std::tr1::_Hashtable<std::pair<google::protobuf::MessageLite_const*,int>,std::pair<std::pair<google::protobuf::MessageLite_const*,int>const,google::protobuf::internal::ExtensionInfo>,std::allocator<std::pair<std::pair<google::protobuf::MessageLite_const*,int>const,google::protobuf::internal::ExtensionInfo>>,std::_Select1st<std::pair<std::pair<google::protobuf::MessageLite_const*,int>const,google::protobuf::internal::ExtensionInfo>>,std::equal_to<std::pair<google::protobuf::MessageLite_const*,int>>,google::protobuf::hash<std::pair<google::protobuf::MessageLite_const*,int>>,std::tr1::__detail::_Mod_range_hashing,std::tr1::__detail::_Default_ranged_hash,std::tr1::__detail::_Prime_rehash_policy,false,false,true>::_M_insert_bucket
 * Signature: undefined __thiscall _M_insert_bucket(_Hashtable<std::pair<google::protobuf::MessageLite_const*,int>,std::pair<std::pair<google::protobuf::MessageLite_const*,int>const,google::protobuf::internal::ExtensionInfo>,std::allocator<std::pair<std::pair<google::protobuf::MessageLite_const*,int>const,google::protobuf::internal::ExtensionInfo>>,std::_Select1st<std::pair<std::pair<google::protobuf::MessageLite_const*,int>const,google::protobuf::internal::ExtensionInfo>>,std::equal_to<std::pair<google::protobuf::MessageLite_const*,int>>,google::protobuf::hash<std::pair<google::protobuf::MessageLite_const*,int>>,std::tr1::__detail::_Mod_range_hashing,std::tr1::__detail::_Default_ranged_hash,std::tr1::__detail::_Prime_rehash_policy,false,false,true> * this, pair * param_1, ulong param_2, ulong param_3)
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
   std::tr1::__detail::_Prime_rehash_policy, false, false,
   true>::_M_insert_bucket(std::pair<std::pair<google::protobuf::MessageLite const*, int> const,
   google::protobuf::internal::ExtensionInfo> const&, unsigned long, unsigned long) */

undefined1  [16] __thiscall
std::tr1::
_Hashtable<std::pair<google::protobuf::MessageLite_const*,int>,std::pair<std::pair<google::protobuf::MessageLite_const*,int>const,google::protobuf::internal::ExtensionInfo>,std::allocator<std::pair<std::pair<google::protobuf::MessageLite_const*,int>const,google::protobuf::internal::ExtensionInfo>>,std::_Select1st<std::pair<std::pair<google::protobuf::MessageLite_const*,int>const,google::protobuf::internal::ExtensionInfo>>,std::equal_to<std::pair<google::protobuf::MessageLite_const*,int>>,google::protobuf::hash<std::pair<google::protobuf::MessageLite_const*,int>>,std::tr1::__detail::_Mod_range_hashing,std::tr1::__detail::_Default_ranged_hash,std::tr1::__detail::_Prime_rehash_policy,false,false,true>
::_M_insert_bucket(_Hashtable<std::pair<google::protobuf::MessageLite_const*,int>,std::pair<std::pair<google::protobuf::MessageLite_const*,int>const,google::protobuf::internal::ExtensionInfo>,std::allocator<std::pair<std::pair<google::protobuf::MessageLite_const*,int>const,google::protobuf::internal::ExtensionInfo>>,std::_Select1st<std::pair<std::pair<google::protobuf::MessageLite_const*,int>const,google::protobuf::internal::ExtensionInfo>>,std::equal_to<std::pair<google::protobuf::MessageLite_const*,int>>,google::protobuf::hash<std::pair<google::protobuf::MessageLite_const*,int>>,std::tr1::__detail::_Mod_range_hashing,std::tr1::__detail::_Default_ranged_hash,std::tr1::__detail::_Prime_rehash_policy,false,false,true>
                   *this,pair *param_1,ulong param_2,ulong param_3)

{
  ulong *puVar1;
  bool bVar2;
  ulong *puVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  float fVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auVar14 [16];
  
  if (*(ulong *)(this + 0x28) < *(ulong *)(this + 0x18) + 1) {
    fVar8 = *(float *)(this + 0x20);
    fVar11 = ((float)*(ulong *)(this + 0x18) + 1.0) / fVar8;
    fVar13 = (float)*(ulong *)(this + 0x10);
    if (fVar13 < fVar11) {
      uVar5 = 0x130;
      puVar3 = (ulong *)PTR_DAT_007e5dd8;
      fVar12 = *(float *)(this + 0x24) * fVar13;
                    /* catch() { ... } // from try @ 005e0524 with catch @ 005e05b0 */
      if (*(float *)(this + 0x24) * fVar13 <= fVar11) {
        fVar12 = fVar11;
      }
      do {
        uVar7 = uVar5 >> 1;
        puVar1 = puVar3 + uVar7 + 1;
        uVar5 = (uVar5 - 1) - uVar7;
        if (fVar12 <= (float)puVar3[uVar7]) {
          puVar1 = puVar3;
          uVar5 = uVar7;
        }
        puVar3 = puVar1;
      } while (0 < (long)uVar5);
      bVar2 = false;
      *(long *)(this + 0x28) = (long)(fVar8 * (float)*puVar1);
      uVar5 = *puVar1;
      goto LAB_005e061c;
    }
    *(long *)(this + 0x28) = (long)(fVar8 * fVar13);
  }
  uVar5 = 0;
  bVar2 = true;
LAB_005e061c:
  auVar14._0_8_ = operator_new(0x38);
                    /* catch() { ... } // from try @ 005e050c with catch @ 005e0624 */
  uVar9 = *(undefined8 *)(param_1 + 0x20);
  auVar14._0_8_[5] = *(undefined8 *)(param_1 + 0x28);
  auVar14._0_8_[4] = uVar9;
  uVar9 = *(undefined8 *)(param_1 + 0x10);
  auVar14._0_8_[3] = *(undefined8 *)(param_1 + 0x18);
  auVar14._0_8_[2] = uVar9;
  uVar10 = *(undefined8 *)(param_1 + 8);
  uVar9 = *(undefined8 *)param_1;
  auVar14._0_8_[6] = 0;
  auVar14._0_8_[1] = uVar10;
  *auVar14._0_8_ = uVar9;
  if (!bVar2) {
                    /* try { // try from 005e0648 to 006e0677 has its CatchHandler @ 005e0680 */
    _M_rehash(this,uVar5);
    uVar7 = 0;
    if (uVar5 != 0) {
      uVar7 = param_3 / uVar5;
    }
    param_2 = param_3 - uVar7 * uVar5;
  }
  lVar4 = *(long *)(this + 8);
  lVar6 = param_2 * 8;
  auVar14._0_8_[6] = *(undefined8 *)(lVar4 + lVar6);
  *(undefined8 **)(lVar4 + lVar6) = auVar14._0_8_;
                    /* try { // try from 005e0678 to 006e0683 has its CatchHandler @ 005e04b4 */
                    /* catch() { ... } // from try @ 005e0648 with catch @ 005e0680 */
  *(long *)(this + 0x18) = *(long *)(this + 0x18) + 1;
  auVar14._8_8_ = *(long *)(this + 8) + lVar6;
  return auVar14;
}


