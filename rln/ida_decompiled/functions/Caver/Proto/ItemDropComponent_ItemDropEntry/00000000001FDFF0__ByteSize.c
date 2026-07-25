/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FDFF0
 * Mangled: ._ZNK5Caver5Proto31ItemDropComponent_ItemDropEntry8ByteSizeEv
 * Demangled: Caver::Proto::ItemDropComponent_ItemDropEntry::ByteSize(void)
 *
 * Callers: 1
 *   0x0000000000330CA0  Caver::Proto::ItemDropComponent::ByteSize(void)
 *
 * Callees: 1
 *   0x000000000032FE6C  Caver::Proto::ItemDropComponent_ItemDropEntry::ByteSize(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FDFF8 string=0x00000000001FDFFC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Proto::ItemDropComponent_ItemDropEntry::ByteSize(
        Caver::Proto::ItemDropComponent_ItemDropEntry *this)
{
  return _ZNK5Caver5Proto31ItemDropComponent_ItemDropEntry8ByteSizeEv(this);
}

