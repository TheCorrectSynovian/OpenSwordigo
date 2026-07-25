/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000201E30
 * Mangled: ._ZN5Caver16ComponentManager26RegisterComponentInterfaceElPNS_9ComponentE
 * Demangled: Caver::ComponentManager::RegisterComponentInterface(long,Caver::Component *)
 *
 * Callers: 1
 *   0x0000000000242204  Caver::Component::RegisterInterface(Caver::ComponentManager *,long)
 *
 * Callees: 1
 *   0x000000000024723C  Caver::ComponentManager::RegisterComponentInterface(long,Caver::Component *)
 *
 * Referenced strings: 1
 *   insn=0x0000000000201E38 string=0x0000000000201E3C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::ComponentManager::RegisterComponentInterface(
        Caver::ComponentManager *this,
        __int64 a2,
        Caver::Component *a3)
{
  return _ZN5Caver16ComponentManager26RegisterComponentInterfaceElPNS_9ComponentE(this, a2, a3);
}

