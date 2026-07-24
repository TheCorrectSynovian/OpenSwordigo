/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00568fdc
 * Function: Caver::Scene::SetPaused
 * Signature: undefined __thiscall SetPaused(Scene * this, bool param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Scene::SetPaused(bool) */

void __thiscall Caver::Scene::SetPaused(Scene *this,bool param_1)

{
  int iVar1;
  
  iVar1 = -1;
  if (param_1) {
    iVar1 = 1;
  }
                    /* try { // try from 00568fec to 00669023 has its CatchHandler @ 00569130 */
  *(int *)(this + 0x20) = *(int *)(this + 0x20) + iVar1;
  return;
}


