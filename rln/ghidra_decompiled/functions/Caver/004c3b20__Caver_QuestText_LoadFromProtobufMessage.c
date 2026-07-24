/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004c3b20
 * Function: Caver::QuestText::LoadFromProtobufMessage
 * Signature: undefined __thiscall LoadFromProtobufMessage(QuestText * this, QuestText * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::QuestText::LoadFromProtobufMessage(Caver::Proto::QuestText const&) */

void __thiscall Caver::QuestText::LoadFromProtobufMessage(QuestText *this,QuestText *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
                    /* catch() { ... } // from try @ 004c3688 with catch @ 004c3b30 */
                    /* catch() { ... } // from try @ 004c3660 with catch @ 004c3b34 */
  FUN_0066a6a8(this,*(undefined8 *)(param_1 + 0x10));
  if (0 < *(int *)(param_1 + 0x20)) {
    lVar3 = 0;
    do {
      lVar1 = *(long *)(this + 0x10);
      uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x18) + lVar3 * 8);
      if (lVar1 == *(long *)(this + 0x18)) {
        std::vector<std::string,std::allocator<std::string>>::_M_insert_aux
                  ((vector<std::string,std::allocator<std::string>> *)(this + 8),lVar1,uVar2);
      }
      else {
                    /* catch() { ... } // from try @ 004c364c with catch @ 004c3b6c */
                    /* catch() { ... } // from try @ 004c3624 with catch @ 004c3b70 */
        FUN_0066a528(lVar1,uVar2);
        *(long *)(this + 0x10) = *(long *)(this + 0x10) + 8;
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 < *(int *)(param_1 + 0x20));
  }
                    /* catch() { ... } // from try @ 004c3610 with catch @ 004c3ba8 */
  return;
}


