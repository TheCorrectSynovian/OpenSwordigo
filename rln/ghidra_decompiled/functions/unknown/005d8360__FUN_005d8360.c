/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005d8360
 * Function: FUN_005d8360
 * Signature: undefined FUN_005d8360(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_005d8360(long *param_1,uint param_2,undefined8 *param_3)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  LogMessage *pLVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long *plVar9;
  int iVar10;
  LogFinisher aLStack_98 [8];
  LogMessage aLStack_90 [40];
  long *local_68;
  ulong uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
                    /* try { // try from 005d8360 to 006d83bb has its CatchHandler @ 005d8028 */
  lVar5 = tpidr_el0;
  local_38 = *(long *)(lVar5 + 0x28);
  pthread_once((pthread_once_t *)&DAT_007ea088,FUN_005e03c4);
  uStack_60 = (ulong)param_2;
  uStack_40 = param_3[3];
  local_48 = param_3[2];
                    /* try { // try from 005d83bc to 006d83c3 has its CatchHandler @ 005d83c4 */
  uStack_50 = param_3[1];
  local_58 = *param_3;
                    /* catch() { ... } // from try @ 005d83bc with catch @ 005d83c4 */
  uVar1 = (long)param_1 * 0xffff + (long)(int)param_2;
  uVar7 = *(ulong *)(DAT_007ea080 + 0x10);
  uVar4 = 0;
  if (uVar7 != 0) {
    uVar4 = uVar1 / uVar7;
  }
  uVar7 = uVar1 - uVar4 * uVar7;
                    /* catch() { ... } // from try @ 005d8338 with catch @ 005d83d8 */
  puVar8 = *(undefined8 **)(*(long *)(DAT_007ea080 + 8) + uVar7 * 8);
  do {
    local_68 = param_1;
    if (puVar8 == (undefined8 *)0x0) {
      std::tr1::
      _Hashtable<std::pair<google::protobuf::MessageLite_const*,int>,std::pair<std::pair<google::protobuf::MessageLite_const*,int>const,google::protobuf::internal::ExtensionInfo>,std::allocator<std::pair<std::pair<google::protobuf::MessageLite_const*,int>const,google::protobuf::internal::ExtensionInfo>>,std::_Select1st<std::pair<std::pair<google::protobuf::MessageLite_const*,int>const,google::protobuf::internal::ExtensionInfo>>,std::equal_to<std::pair<google::protobuf::MessageLite_const*,int>>,google::protobuf::hash<std::pair<google::protobuf::MessageLite_const*,int>>,std::tr1::__detail::_Mod_range_hashing,std::tr1::__detail::_Default_ranged_hash,std::tr1::__detail::_Prime_rehash_policy,false,false,true>
      ::_M_insert_bucket(DAT_007ea080,(pair *)&local_68,uVar7,uVar1);
LAB_005d8408:
                    /* try { // try from 005d8408 to 006d84eb has its CatchHandler @ 005d84f4 */
      if (*(long *)(lVar5 + 0x28) == local_38) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
                    /* catch() { ... } // from try @ 005d81cc with catch @ 005d83e4 */
    if (((long *)*puVar8 == param_1) && (*(uint *)(puVar8 + 1) == param_2)) {
      google::protobuf::internal::LogMessage::LogMessage(aLStack_90,3,&DAT_00698a0c,0x55);
                    /* catch() { ... } // from try @ 005d8220 with catch @ 005d8448 */
                    /* catch() { ... } // from try @ 005d8268 with catch @ 005d844c */
      pLVar6 = (LogMessage *)
               google::protobuf::internal::LogMessage::operator<<
                         (aLStack_90,"Multiple extension registrations for type \"");
                    /* catch() { ... } // from try @ 005d8134 with catch @ 005d8458 */
                    /* catch() { ... } // from try @ 005d8110 with catch @ 005d845c */
      (**(code **)(*param_1 + 0x10))(&local_68,param_1);
      pLVar6 = (LogMessage *)
               google::protobuf::internal::LogMessage::operator<<(pLVar6,(string *)&local_68);
      pLVar6 = (LogMessage *)
               google::protobuf::internal::LogMessage::operator<<(pLVar6,"\", field number ");
      pLVar6 = (LogMessage *)google::protobuf::internal::LogMessage::operator<<(pLVar6,param_2);
      pLVar6 = (LogMessage *)google::protobuf::internal::LogMessage::operator<<(pLVar6,".");
      google::protobuf::internal::LogFinisher::operator=(aLStack_98,pLVar6);
      if (local_68 + -3 != (long *)PTR_DAT_007e5de8) {
        plVar9 = local_68 + -1;
        if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
                    /* try { // try from 005d84ec to 006d84f7 has its CatchHandler @ 005d8028 */
          iVar10 = (int)*plVar9;
                    /* catch() { ... } // from try @ 005d8408 with catch @ 005d84f4 */
          *(int *)plVar9 = iVar10 + -1;
        }
        else {
          do {
            iVar10 = (int)*plVar9;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar3) {
              *(int *)plVar9 = iVar10 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        if (iVar10 < 1) {
          operator_delete(local_68 + -3);
        }
      }
      google::protobuf::internal::LogMessage::~LogMessage(aLStack_90);
      goto LAB_005d8408;
    }
    puVar8 = (undefined8 *)puVar8[6];
  } while( true );
}


