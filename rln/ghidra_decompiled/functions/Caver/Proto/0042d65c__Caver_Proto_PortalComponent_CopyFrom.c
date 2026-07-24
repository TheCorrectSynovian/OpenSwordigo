/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0042d65c
 * Function: Caver::Proto::PortalComponent::CopyFrom
 * Signature: undefined __thiscall CopyFrom(PortalComponent * this, PortalComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::PortalComponent::CopyFrom(Caver::Proto::PortalComponent const&) */

void __thiscall
Caver::Proto::PortalComponent::CopyFrom(PortalComponent *this,PortalComponent *param_1)

{
                    /* try { // try from 0042d668 to 0052ddb3 has its CatchHandler @ 0042d23c */
  if (param_1 != this) {
    (**(code **)(*(long *)this + 0x20))(this);
    MergeFrom(this,param_1);
    return;
  }
  return;
}


