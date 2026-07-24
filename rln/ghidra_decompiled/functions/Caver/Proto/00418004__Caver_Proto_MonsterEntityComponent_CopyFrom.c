/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00418004
 * Function: Caver::Proto::MonsterEntityComponent::CopyFrom
 * Signature: undefined __thiscall CopyFrom(MonsterEntityComponent * this, MonsterEntityComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::MonsterEntityComponent::CopyFrom(Caver::Proto::MonsterEntityComponent const&) */

void __thiscall
Caver::Proto::MonsterEntityComponent::CopyFrom
          (MonsterEntityComponent *this,MonsterEntityComponent *param_1)

{
                    /* catch() { ... } // from try @ 00417fe4 with catch @ 00418014 */
  if (param_1 != this) {
                    /* catch() { ... } // from try @ 00417f90 with catch @ 00418020 */
                    /* catch() { ... } // from try @ 00417f3c with catch @ 00418024 */
    (**(code **)(*(long *)this + 0x20))(this);
                    /* try { // try from 00418038 to 0051806b has its CatchHandler @ 00418038
                       catch() { ... } // from try @ 00418038 with catch @ 00418038
                       catch() { ... } // from try @ 0041893c with catch @ 00418038 */
    MergeFrom(this,param_1);
    return;
  }
  return;
}


