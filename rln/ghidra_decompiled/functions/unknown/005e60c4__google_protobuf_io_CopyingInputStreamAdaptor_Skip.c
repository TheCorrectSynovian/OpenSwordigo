/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005e60c4
 * Function: google::protobuf::io::CopyingInputStreamAdaptor::Skip
 * Signature: undefined __thiscall Skip(CopyingInputStreamAdaptor * this, int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::io::CopyingInputStreamAdaptor::Skip(int) */

void __thiscall
google::protobuf::io::CopyingInputStreamAdaptor::Skip(CopyingInputStreamAdaptor *this,int param_1)

{
  int iVar1;
  CopyingInputStreamAdaptor CVar2;
  long lVar3;
  bool bVar4;
  int iVar5;
  LogMessage *pLVar6;
  LogFinisher aLStack_60 [8];
  LogMessage aLStack_58 [32];
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
                    /* try { // try from 005e60e4 to 006e611b has its CatchHandler @ 005e4fb8 */
                    /* catch() { ... } // from try @ 005e598c with catch @ 005e60ec
                       catch() { ... } // from try @ 005e60b4 with catch @ 005e60ec */
  if (param_1 < 0) {
    internal::LogMessage::LogMessage(aLStack_58,3,&DAT_00699304,0x10c);
                    /* try { // try from 005e611c to 006e61bb has its CatchHandler @ 005e611c
                       catch() { ... } // from try @ 005e611c with catch @ 005e611c
                       catch() { ... } // from try @ 005e61cc with catch @ 005e611c
                       catch() { ... } // from try @ 005e6228 with catch @ 005e611c
                       catch() { ... } // from try @ 005e6448 with catch @ 005e611c
                       catch() { ... } // from try @ 005e660c with catch @ 005e611c */
    pLVar6 = (LogMessage *)
             internal::LogMessage::operator<<(aLStack_58,"CHECK failed: (count) >= (0): ");
    internal::LogFinisher::operator=(aLStack_60,pLVar6);
    internal::LogMessage::~LogMessage(aLStack_58);
    CVar2 = this[0x11];
  }
  else {
    CVar2 = this[0x11];
  }
  if (CVar2 == (CopyingInputStreamAdaptor)0x0) {
    iVar1 = *(int *)(this + 0x30);
    if (iVar1 < param_1) {
      *(undefined4 *)(this + 0x30) = 0;
      iVar5 = (**(code **)(**(long **)(this + 8) + 0x18))(*(long **)(this + 8),param_1 - iVar1);
      bVar4 = iVar5 == param_1 - iVar1;
      *(long *)(this + 0x18) = *(long *)(this + 0x18) + (long)iVar5;
    }
    else {
      *(int *)(this + 0x30) = iVar1 - param_1;
      bVar4 = true;
    }
  }
  else {
                    /* catch() { ... } // from try @ 005e6050 with catch @ 005e60f8 */
    bVar4 = false;
  }
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(bVar4);
  }
  return;
}


