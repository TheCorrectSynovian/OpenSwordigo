/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0044845c
 * Function: boost::shared_ptr<Caver::GameOverView>::shared_ptr<Caver::GameOverView>
 * Signature: undefined __thiscall shared_ptr<Caver::GameOverView>(shared_ptr<Caver::GameOverView> * this, GameOverView * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::shared_ptr<Caver::GameOverView>::shared_ptr<Caver::GameOverView>(Caver::GameOverView*) */

void __thiscall
boost::shared_ptr<Caver::GameOverView>::shared_ptr<Caver::GameOverView>
          (shared_ptr<Caver::GameOverView> *this,GameOverView *param_1)

{
  undefined *puVar1;
  long *plVar2;
  
                    /* try { // try from 00448460 to 0054846f has its CatchHandler @ 0044cf50 */
  *(GameOverView **)this = param_1;
  *(undefined8 *)(this + 8) = 0;
  plVar2 = operator_new(0x20);
  puVar1 = PTR_vtable_007e7dd0;
                    /* try { // try from 00448484 to 00548497 has its CatchHandler @ 0044ef88 */
  plVar2[3] = (long)param_1;
  plVar2[2] = 1;
  plVar2[1] = 1;
  *plVar2 = (long)(puVar1 + 0x10);
  *(long **)(this + 8) = plVar2;
  if (param_1 != (GameOverView *)0x0) {
    enable_shared_from_this<Caver::GUIResponder>::
    _internal_accept_owner<Caver::GameOverView,Caver::GameOverView>
              ((enable_shared_from_this<Caver::GUIResponder> *)(param_1 + 8),(shared_ptr *)this,
               param_1);
  }
                    /* try { // try from 004484b4 to 005484c3 has its CatchHandler @ 0044cf48 */
  return;
}


