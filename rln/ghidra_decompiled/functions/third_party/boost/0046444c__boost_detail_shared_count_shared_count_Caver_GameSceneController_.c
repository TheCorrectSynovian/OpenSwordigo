/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0046444c
 * Function: boost::detail::shared_count::shared_count<Caver::GameSceneController>
 * Signature: undefined __thiscall shared_count<Caver::GameSceneController>(shared_count * this, GameSceneController * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::detail::shared_count::shared_count<Caver::GameSceneController>(Caver::GameSceneController*)
    */

void __thiscall
boost::detail::shared_count::shared_count<Caver::GameSceneController>
          (shared_count *this,GameSceneController *param_1)

{
  undefined *puVar1;
  long *plVar2;
  
                    /* try { // try from 00464450 to 0056445b has its CatchHandler @ 00465094 */
  *(undefined8 *)this = 0;
  plVar2 = operator_new(0x20);
  puVar1 = PTR_vtable_007e6630;
  plVar2[3] = (long)param_1;
                    /* try { // try from 00464480 to 005644bb has its CatchHandler @ 00465038 */
  plVar2[2] = 1;
  plVar2[1] = 1;
  *plVar2 = (long)(puVar1 + 0x10);
  *(long **)this = plVar2;
  return;
}


