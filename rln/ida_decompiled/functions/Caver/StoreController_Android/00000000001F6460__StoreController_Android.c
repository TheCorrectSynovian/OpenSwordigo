/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F6460
 * Mangled: ._ZN5Caver23StoreController_AndroidC2Ev
 * Demangled: Caver::StoreController_Android::StoreController_Android(void)
 *
 * Callers: 1
 *   0x0000000000477D9C  Java_com_touchfoo_swordigo_Native_setFilesDir
 *
 * Callees: 1
 *   0x00000000004BD20C  Caver::StoreController_Android::StoreController_Android(void)
 *
 * Referenced strings: 2
 *   insn=0x00000000001F6464 string=0x00000000004BD20C "H"
 *   insn=0x00000000001F6468 string=0x00000000001F646C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::StoreController_Android::StoreController_Android(Caver::StoreController_Android *this)
{
  return _ZN5Caver23StoreController_AndroidC2Ev(this);
}

