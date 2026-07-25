/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000314B04
 * Mangled: _ZN5Caver5Proto15EntityComponent4SwapEPS1_
 * Demangled: Caver::Proto::EntityComponent::Swap(Caver::Proto::EntityComponent*)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 17
 *   insn=0x0000000000314B04 string=0x0000000000314B08 " "
 *   insn=0x0000000000314B08 string=0x0000000000314B0C "("
 *   insn=0x0000000000314B0C string=0x0000000000314B10 "\t"
 *   insn=0x0000000000314B10 string=0x0000000000314B14 ""
 *   insn=0x0000000000314B14 string=0x0000000000314B18 ")"
 *   insn=0x0000000000314B18 string=0x0000000000314B1C "(@@9\t@@9@"
 *   insn=0x0000000000314B1C string=0x0000000000314B20 "\t@@9@"
 *   insn=0x0000000000314B20 string=0x0000000000314B24 "@"
 *   insn=0x0000000000314B24 string=0x0000000000314B28 ")@"
 *   insn=0x0000000000314B28 string=0x0000000000314B2C "("
 *   insn=0x0000000000314B2C string=0x0000000000314B30 "\t"
 *   insn=0x0000000000314B30 string=0x0000000000314B34 ""
 *   insn=0x0000000000314B34 string=0x0000000000314B38 ")"
 *   insn=0x0000000000314B38 string=0x0000000000314B3C "(@"
 *   insn=0x0000000000314B3C string=0x0000000000314B40 "\t@"
 *   insn=0x0000000000314B40 string=0x0000000000314B44 ""
 *   insn=0x0000000000314B44 string=0x0000000000314B48 ")"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::EntityComponent::Swap(__int64 this, Caver::Proto::EntityComponent *a2)
{
  int v2; // w9
  int v3; // w9
  int v4; // w9

  if ( a2 != (Caver::Proto::EntityComponent *)this )
  {
    v2 = *(_DWORD *)(this + 12);
    *(_DWORD *)(this + 12) = *((_DWORD *)a2 + 3);
    *((_DWORD *)a2 + 3) = v2;
    LOBYTE(v2) = *(_BYTE *)(this + 16);
    *(_BYTE *)(this + 16) = *((_BYTE *)a2 + 16);
    *((_BYTE *)a2 + 16) = v2;
    v3 = *(_DWORD *)(this + 20);
    *(_DWORD *)(this + 20) = *((_DWORD *)a2 + 5);
    *((_DWORD *)a2 + 5) = v3;
    v4 = *(_DWORD *)(this + 8);
    *(_DWORD *)(this + 8) = *((_DWORD *)a2 + 2);
    *((_DWORD *)a2 + 2) = v4;
  }
  return this;
}

