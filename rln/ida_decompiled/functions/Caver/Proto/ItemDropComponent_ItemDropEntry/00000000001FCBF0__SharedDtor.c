/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FCBF0
 * Mangled: ._ZN5Caver5Proto31ItemDropComponent_ItemDropEntry10SharedDtorEv
 * Demangled: Caver::Proto::ItemDropComponent_ItemDropEntry::SharedDtor(void)
 *
 * Callers: 2
 *   0x000000000032F570  Caver::Proto::ItemDropComponent_ItemDropEntry::ItemDropComponent_ItemDropEntry(Caver::Proto::ItemDropComponent_ItemDropEntry const&)
 *   0x000000000032F920  Caver::Proto::ItemDropComponent_ItemDropEntry::~ItemDropComponent_ItemDropEntry()
 *
 * Callees: 1
 *   0x000000000032F570  Caver::Proto::ItemDropComponent_ItemDropEntry::ItemDropComponent_ItemDropEntry(Caver::Proto::ItemDropComponent_ItemDropEntry const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FCBF8 string=0x00000000001FCBFC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::ItemDropComponent_ItemDropEntry::SharedDtor(
        Caver::Proto::ItemDropComponent_ItemDropEntry *this)
{
  JUMPOUT(0x32F7DC);
}

