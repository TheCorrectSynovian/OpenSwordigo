/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000032FFAC
 * Mangled: _ZN5Caver5Proto31ItemDropComponent_ItemDropEntry8CopyFromERKS1_
 * Demangled: Caver::Proto::ItemDropComponent_ItemDropEntry::CopyFrom(Caver::Proto::ItemDropComponent_ItemDropEntry const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FE410  Caver::Proto::ItemDropComponent_ItemDropEntry::MergeFrom(Caver::Proto::ItemDropComponent_ItemDropEntry const&)
 *
 * Referenced strings: 3
 *   insn=0x000000000032FFC0 string=0x000000000032FFC4 "@"
 *   insn=0x000000000032FFCC string=0x000000000032FFD0 ""
 *   insn=0x000000000032FFE4 string=0x000000000032FFE8 "\n9"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::ItemDropComponent_ItemDropEntry::CopyFrom(
        Caver::Proto::ItemDropComponent_ItemDropEntry *this,
        const Caver::Proto::ItemDropComponent_ItemDropEntry *a2)
{
  if ( a2 != this )
  {
    (*(void (__fastcall **)(Caver::Proto::ItemDropComponent_ItemDropEntry *))(*(_QWORD *)this + 32LL))(this);
    Caver::Proto::ItemDropComponent_ItemDropEntry::MergeFrom(this, a2);
  }
}

