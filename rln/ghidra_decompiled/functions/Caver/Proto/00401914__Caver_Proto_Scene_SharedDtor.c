/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00401914
 * Function: Caver::Proto::Scene::SharedDtor
 * Signature: undefined __thiscall SharedDtor(Scene * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::Scene::SharedDtor() */

void __thiscall Caver::Proto::Scene::SharedDtor(Scene *this)

{
  if (*(Scene **)PTR_default_instance__007e7a20 != this) {
    if (*(long **)(this + 0x80) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x80) + 8))();
    }
    if (*(long **)(this + 0x88) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x88) + 8))();
    }
    if (*(long **)(this + 0x90) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00401978. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(this + 0x90) + 8))();
      return;
    }
  }
  return;
}


