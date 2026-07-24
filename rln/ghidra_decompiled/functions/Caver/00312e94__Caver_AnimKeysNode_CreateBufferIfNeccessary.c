/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00312e94
 * Function: Caver::AnimKeysNode::CreateBufferIfNeccessary
 * Signature: undefined __thiscall CreateBufferIfNeccessary(AnimKeysNode * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::AnimKeysNode::CreateBufferIfNeccessary() */

void __thiscall Caver::AnimKeysNode::CreateBufferIfNeccessary(AnimKeysNode *this)

{
  int iVar1;
  
  if (*(long *)(this + 0x18) != 0) {
    iVar1 = **(int **)(*(long *)(this + 0x18) + 0x10);
    if (*(int *)(this + 0x40) != iVar1) {
      FloatDataBuffer::Resize((FloatDataBuffer *)(this + 0x40),iVar1);
      return;
    }
  }
  return;
}


