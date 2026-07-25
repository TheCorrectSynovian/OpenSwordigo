/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000027FF68
 * Mangled: _ZNK5Caver18PhysicsObjectState8positionEv
 * Demangled: Caver::PhysicsObjectState::position(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 2
 *   insn=0x000000000027FF68 string=0x000000000027FF6C ")9@"
 *   insn=0x000000000027FF6C string=0x000000000027FF70 "\t"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::PhysicsObjectState::position@<X0>(__int64 this@<X0>, _QWORD *a2@<X8>)
{
  *a2 = *(_QWORD *)(*(_QWORD *)this + 112LL);
  return this;
}

