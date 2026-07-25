/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004BD434
 * Mangled: _ZN5Caver23StoreController_Android12GetStoreNameEv
 * Demangled: Caver::StoreController_Android::GetStoreName(void)
 *
 * Callers: 1
 *   0x00000000004BD270  Caver::StoreController_Android::~StoreController_Android()
 *
 * Callees: 1
 *   0x00000000001F6ED0  Caver::AndroidGetStoreName(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000004BD434 string=0x00000000001F6ED0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::StoreController_Android::GetStoreName(Caver::StoreController_Android *this)
{
  return Caver::AndroidGetStoreName(this);
}

