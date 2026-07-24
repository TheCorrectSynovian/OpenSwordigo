/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0045710c
 * Function: Caver::GameViewController::TransitionToViewController
 * Signature: undefined __thiscall TransitionToViewController(GameViewController * this, shared_ptr * param_1, float param_2, float param_3, bool param_4)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GameViewController::TransitionToViewController(boost::shared_ptr<Caver::GUIViewController>
   const&, float, float, bool) */

void __thiscall
Caver::GameViewController::TransitionToViewController
          (GameViewController *this,shared_ptr *param_1,float param_2,float param_3,bool param_4)

{
  undefined4 in_register_00005004;
  undefined4 in_register_00005024;
  
                    /* try { // try from 00457128 to 00557247 has its CatchHandler @ 00457128
                       catch() { ... } // from try @ 00457128 with catch @ 00457128
                       catch() { ... } // from try @ 0045725c with catch @ 00457128
                       catch() { ... } // from try @ 00457380 with catch @ 00457128
                       catch() { ... } // from try @ 00457434 with catch @ 00457128 */
  GameEvent::SetEventsEnabled(false);
                    /* WARNING: Could not recover jumptable at 0x00457168. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(this + 0x40) + 8))
            (CONCAT44(in_register_00005004,param_2),CONCAT44(in_register_00005024,param_3),
             *(long **)(this + 0x40),param_1,param_4);
  return;
}


