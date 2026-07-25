/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000280000
 * Mangled: _ZNK5Caver18PhysicsObjectState8velocityEv
 * Demangled: Caver::PhysicsObjectState::velocity(void)
 *
 * Callers: 1
 *   0x00000000001FDF60  Caver::PhysicsObjectState::velocity(void)
 *
 * Callees: 0
 *
 * Referenced strings: 2
 *   insn=0x0000000000280000 string=0x0000000000280004 ")5@"
 *   insn=0x0000000000280004 string=0x0000000000280008 "\t"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::PhysicsObjectState::velocity@<X0>(__int64 this@<X0>, _QWORD *a2@<X8>)
{
  *a2 = *(_QWORD *)(*(_QWORD *)this + 104LL);
  return this;
}

