/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000026E58C
 * Mangled: _ZNK5Caver15ComponentOutletINS_28AnimationControllerComponentEE9InterfaceEv
 * Demangled: Caver::ComponentOutlet<Caver::AnimationControllerComponent>::Interface(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x000000000021D49C  Caver::AnimationControllerComponent::Interface(void)
 *
 * Referenced strings: 1
 *   insn=0x000000000026E590 string=0x000000000021D49C " &"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 (__fastcall *(__fastcall *Caver::ComponentOutlet<Caver::AnimationControllerComponent>::Interface())(
        Caver::AnimationControllerComponent *this))(Caver::AnimationControllerComponent *__hidden this)
{
  return Caver::AnimationControllerComponent::Interface;
}

