/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005d8ae0
 * Function: google::protobuf::internal::ExtensionSet::Extension::GetSize
 * Signature: undefined __thiscall GetSize(Extension * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::internal::ExtensionSet::Extension::GetSize() const */

void __thiscall google::protobuf::internal::ExtensionSet::Extension::GetSize(Extension *this)

{
  undefined4 uVar1;
  long lVar2;
  LogMessage *pLVar3;
  LogFinisher aLStack_50 [8];
  LogMessage aLStack_48 [32];
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
                    /* try { // try from 005d8afc to 006d8b23 has its CatchHandler @ 005d8b2c */
                    /* try { // try from 005d8b24 to 006d8b3f has its CatchHandler @ 005d8a74 */
  switch(*(undefined4 *)(PTR_kFieldTypeToCppTypeMap_007e7828 + (ulong)(byte)this[8] * 4)) {
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
                    /* catch() { ... } // from try @ 005d8afc with catch @ 005d8b2c */
                    /* catch() { ... } // from try @ 005d8a8c with catch @ 005d8b30 */
    uVar1 = *(undefined4 *)(*(long *)this + 8);
    break;
  default:
                    /* catch() { ... } // from try @ 005d8b50 with catch @ 005d8b58 */
    LogMessage::LogMessage(aLStack_48,3,&DAT_00698a0c,0x581);
    pLVar3 = (LogMessage *)LogMessage::operator<<(aLStack_48,"Can\'t get here.");
                    /* catch() { ... } // from try @ 005d8bf0 with catch @ 005d8b80
                       catch() { ... } // from try @ 005d8c94 with catch @ 005d8b80 */
    LogFinisher::operator=(aLStack_50,pLVar3);
    LogMessage::~LogMessage(aLStack_48);
    uVar1 = 0;
  }
                    /* try { // try from 005d8b40 to 006d8b4b has its CatchHandler @ 005d8b4c */
  if (*(long *)(lVar2 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar1);
  }
                    /* catch() { ... } // from try @ 005d8b40 with catch @ 005d8b4c */
                    /* try { // try from 005d8b50 to 006d8b53 has its CatchHandler @ 005d8b58 */
  return;
}


