/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0057653c
 * Function: Caver::SceneObjectGroup::SetValueForBindedProperty
 * Signature: undefined __thiscall SetValueForBindedProperty(SceneObjectGroup * this, int param_1, BindingValue * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* non-virtual thunk to Caver::SceneObjectGroup::SetValueForBindedProperty(int, Caver::BindingValue
   const&) */

void __thiscall
Caver::SceneObjectGroup::SetValueForBindedProperty
          (SceneObjectGroup *this,int param_1,BindingValue *param_2)

{
                    /* try { // try from 0057653c to 0067654f has its CatchHandler @ 0057c49c */
  SetValueForBindedProperty(this + -0x10,param_1,param_2);
  return;
}


