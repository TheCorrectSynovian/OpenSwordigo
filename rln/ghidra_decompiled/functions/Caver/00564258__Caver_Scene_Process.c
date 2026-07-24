/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00564258
 * Function: Caver::Scene::Process
 * Signature: undefined __cdecl Process(SceneProcessingContext * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Scene::Process(Caver::SceneProcessingContext*) */

void Caver::Scene::Process(SceneProcessingContext *param_1)

{
  SceneProcessingContext *pSVar1;
  
                    /* catch() { ... } // from try @ 00564248 with catch @ 00564260 */
  ObjectLibrary::Process(*(SceneProcessingContext **)(param_1 + 0xa0));
  for (pSVar1 = *(SceneProcessingContext **)(param_1 + 200); param_1 + 0xb8 != pSVar1;
      pSVar1 = (SceneProcessingContext *)FUN_0064c6a0(pSVar1)) {
                    /* try { // try from 00564284 to 006642ab has its CatchHandler @ 005642b4 */
    SceneObject::Process(*(SceneObject **)(pSVar1 + 0x28));
  }
  return;
}


