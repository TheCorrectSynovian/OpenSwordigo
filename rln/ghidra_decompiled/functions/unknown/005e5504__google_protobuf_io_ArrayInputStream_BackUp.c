/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005e5504
 * Function: google::protobuf::io::ArrayInputStream::BackUp
 * Signature: undefined __thiscall BackUp(ArrayInputStream * this, int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::io::ArrayInputStream::BackUp(int) */

void __thiscall google::protobuf::io::ArrayInputStream::BackUp(ArrayInputStream *this,int param_1)

{
  int iVar1;
  long lVar2;
  LogMessage *pLVar3;
  LogFinisher aLStack_b0 [8];
  LogMessage aLStack_a8 [32];
  LogFinisher aLStack_88 [8];
  LogMessage aLStack_80 [32];
  LogFinisher aLStack_60 [8];
  LogMessage aLStack_58 [32];
  long local_38;
  
                    /* try { // try from 005e5518 to 006e551f has its CatchHandler @ 005e5f00 */
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
                    /* try { // try from 005e5520 to 006e5527 has its CatchHandler @ 005e5ad0 */
                    /* try { // try from 005e5528 to 006e553b has its CatchHandler @ 005e5acc */
  iVar1 = *(int *)(this + 0x1c);
  if (iVar1 < 1) {
                    /* try { // try from 005e5550 to 006e5557 has its CatchHandler @ 005e5abc */
                    /* try { // try from 005e5558 to 006e556b has its CatchHandler @ 005e5ab8 */
    internal::LogMessage::LogMessage(aLStack_58,3,&DAT_00699304,0x4f);
                    /* try { // try from 005e556c to 006e557f has its CatchHandler @ 005e5d10 */
    pLVar3 = (LogMessage *)
             internal::LogMessage::operator<<
                       (aLStack_58,"CHECK failed: (last_returned_size_) > (0): ");
    pLVar3 = (LogMessage *)
             internal::LogMessage::operator<<
                       (pLVar3,"BackUp() can only be called after a successful Next().");
                    /* try { // try from 005e5580 to 006e558f has its CatchHandler @ 005e5d34 */
    internal::LogFinisher::operator=(aLStack_60,pLVar3);
    internal::LogMessage::~LogMessage(aLStack_58);
    iVar1 = *(int *)(this + 0x1c);
  }
  if (iVar1 < param_1) {
    internal::LogMessage::LogMessage(aLStack_80,3,&DAT_00699304,0x51);
    pLVar3 = (LogMessage *)
             internal::LogMessage::operator<<
                       (aLStack_80,"CHECK failed: (count) <= (last_returned_size_): ");
                    /* try { // try from 005e55c8 to 006e55ef has its CatchHandler @ 005e5968 */
    internal::LogFinisher::operator=(aLStack_88,pLVar3);
    internal::LogMessage::~LogMessage(aLStack_80);
  }
  if (param_1 < 0) {
    internal::LogMessage::LogMessage(aLStack_a8,3,&DAT_00699304,0x52);
    pLVar3 = (LogMessage *)
             internal::LogMessage::operator<<(aLStack_a8,"CHECK failed: (count) >= (0): ");
    internal::LogFinisher::operator=(aLStack_b0,pLVar3);
                    /* try { // try from 005e5610 to 006e5637 has its CatchHandler @ 005e5d34 */
    internal::LogMessage::~LogMessage(aLStack_a8);
  }
  *(int *)(this + 0x18) = *(int *)(this + 0x18) - param_1;
  *(undefined4 *)(this + 0x1c) = 0;
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


