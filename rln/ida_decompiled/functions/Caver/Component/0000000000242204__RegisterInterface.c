/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000242204
 * Mangled: _ZN5Caver9Component17RegisterInterfaceEPNS_16ComponentManagerEl
 * Demangled: Caver::Component::RegisterInterface(Caver::ComponentManager *,long)
 *
 * Callers: 1
 *   0x00000000001F38A0  Caver::Component::RegisterInterface(Caver::ComponentManager *,long)
 *
 * Callees: 1
 *   0x0000000000201E30  Caver::ComponentManager::RegisterComponentInterface(long,Caver::Component *)
 *
 * Referenced strings: 1
 *   insn=0x0000000000242210 string=0x0000000000242214 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Component::RegisterInterface(Caver::Component *this, Caver::ComponentManager *a2, __int64 a3)
{
  return Caver::ComponentManager::RegisterComponentInterface(a2, a3, this);
}

