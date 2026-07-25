/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FE100
 * Mangled: ._ZN5Caver18MagicBoltComponent7ExplodeEb
 * Demangled: Caver::MagicBoltComponent::Explode(bool)
 *
 * Callers: 1
 *   0x0000000000285384  Caver::MagicBoltComponent::HandleMessage(int,void *)
 *
 * Callees: 1
 *   0x00000000002847C0  Caver::MagicBoltComponent::Explode(bool)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FE108 string=0x00000000001FE10C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::MagicBoltComponent::Explode(Caver::MagicBoltComponent *this, bool a2)
{
  return _ZN5Caver18MagicBoltComponent7ExplodeEb(this, a2);
}

