/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005e5684
 * Function: google::protobuf::io::ArrayInputStream::Skip
 * Signature: undefined __thiscall Skip(ArrayInputStream * this, int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::io::ArrayInputStream::Skip(int) */

void __thiscall google::protobuf::io::ArrayInputStream::Skip(ArrayInputStream *this,int param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  LogMessage *pLVar4;
  LogFinisher aLStack_60 [8];
  LogMessage aLStack_58 [32];
  long local_38;
  
                    /* try { // try from 005e568c to 006e568f has its CatchHandler @ 005e5d18 */
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  if (param_1 < 0) {
                    /* try { // try from 005e56b8 to 006e56bf has its CatchHandler @ 005e5ab4 */
    internal::LogMessage::LogMessage(aLStack_58,3,&DAT_00699304,0x58);
    pLVar4 = (LogMessage *)
             internal::LogMessage::operator<<(aLStack_58,"CHECK failed: (count) >= (0): ");
    internal::LogFinisher::operator=(aLStack_60,pLVar4);
                    /* try { // try from 005e56e8 to 006e56f3 has its CatchHandler @ 005e5a64 */
    internal::LogMessage::~LogMessage(aLStack_58);
  }
  iVar2 = *(int *)(this + 0x10) - *(int *)(this + 0x18);
  iVar1 = *(int *)(this + 0x10);
  if (param_1 <= iVar2) {
    iVar1 = *(int *)(this + 0x18) + param_1;
  }
  *(int *)(this + 0x18) = iVar1;
  *(undefined4 *)(this + 0x1c) = 0;
                    /* try { // try from 005e5714 to 006e573b has its CatchHandler @ 005e5964 */
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1 <= iVar2);
}


