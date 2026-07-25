/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F6ED0
 * Mangled: ._ZN5Caver19AndroidGetStoreNameEv
 * Demangled: Caver::AndroidGetStoreName(void)
 *
 * Callers: 1
 *   0x00000000004BD434  Caver::StoreController_Android::GetStoreName(void)
 *
 * Callees: 1
 *   0x000000000047A21C  Caver::AndroidGetStoreName(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F6ED8 string=0x00000000001F6EDC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::AndroidGetStoreName(Caver *this)
{
  return _ZN5Caver19AndroidGetStoreNameEv(this);
}

