/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005aa758
 * Function: Caver::GUITextBubble::Update
 * Signature: undefined __thiscall Update(GUITextBubble * this, float param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUITextBubble::Update(float) */

void __thiscall Caver::GUITextBubble::Update(GUITextBubble *this,float param_1)

{
  char *pcVar1;
  long lVar2;
  GUITextBubble *pGVar3;
  ulong uVar4;
  ulong uVar5;
  float fVar6;
  
  pGVar3 = this + 0x28;
  lVar2 = *(long *)pGVar3;
  uVar4 = *(ulong *)(this + 0x80);
  if (uVar4 < *(ulong *)(lVar2 + -0x18)) {
    do {
                    /* catch() { ... } // from try @ 005aa6cc with catch @ 005aa790 */
      uVar5 = uVar4;
      if (-1 < *(int *)(lVar2 + -8)) {
        FUN_00668ea8(pGVar3);
        lVar2 = *(long *)(this + 0x28);
        uVar5 = *(ulong *)(this + 0x80);
      }
      pcVar1 = (char *)(lVar2 + uVar4);
      uVar4 = uVar5;
      if (*pcVar1 != ' ') {
                    /* try { // try from 005aa7b4 to 006aa883 has its CatchHandler @ 005aa888 */
        if (-1 < *(int *)(lVar2 + -8)) {
          FUN_00668ea8(pGVar3);
          lVar2 = *(long *)(this + 0x28);
          uVar4 = *(ulong *)(this + 0x80);
        }
        if (*(char *)(lVar2 + uVar5) != '\n') break;
      }
                    /* catch() { ... } // from try @ 005aa60c with catch @ 005aa7e0 */
      uVar4 = uVar4 + 1;
                    /* catch() { ... } // from try @ 005aa5b4 with catch @ 005aa7e4 */
      *(ulong *)(this + 0x80) = uVar4;
    } while (uVar4 < *(ulong *)(lVar2 + -0x18));
  }
  if (uVar4 < *(ulong *)(lVar2 + -0x18)) {
    fVar6 = *(float *)(this + 0x88);
    *(float *)(this + 0x88) = fVar6 + param_1;
    if (*(float *)(this + 0x8c) < fVar6 + param_1) {
      *(undefined4 *)(this + 0x88) = 0;
      *(ulong *)(this + 0x80) = uVar4 + 1;
    }
  }
  else {
                    /* catch() { ... } // from try @ 005aa4f4 with catch @ 005aa834 */
                    /* catch() { ... } // from try @ 005aa49c with catch @ 005aa838 */
    if ((this[0x90] != (GUITextBubble)0x0) &&
       (fVar6 = *(float *)(this + 0x94), *(float *)(this + 0x94) = fVar6 + param_1,
       0.5 <= fVar6 + param_1)) {
      *(undefined4 *)(this + 0x94) = 0;
      this[0x91] = (GUITextBubble)((byte)this[0x91] ^ 1);
    }
  }
  return;
}


