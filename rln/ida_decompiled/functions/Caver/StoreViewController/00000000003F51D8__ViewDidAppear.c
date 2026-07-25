/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003F51D8
 * Mangled: _ZN5Caver19StoreViewController13ViewDidAppearEv
 * Demangled: Caver::StoreViewController::ViewDidAppear(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F3AF0  Caver::StoreView::AnimateIn(void)
 *
 * Referenced strings: 7
 *   insn=0x00000000003F51E4 string=0x00000000003F51E8 "`.@"
 *   insn=0x00000000003F51E8 string=0x00000000003F51EC ""
 *   insn=0x00000000003F51EC string=0x00000000003F51F0 "y@"
 *   insn=0x00000000003F51F8 string=0x00000000003F5200 ""
 *   insn=0x00000000003F5200 string=0x00000000003F5204 "`.@"
 *   insn=0x00000000003F520C string=0x00000000003F5210 "8"
 *   insn=0x00000000003F5210 string=0x00000000001F3AF0 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::StoreViewController::ViewDidAppear(Caver::StoreViewController *this)
{
  *(_DWORD *)((*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 11) + 240LL))(*((_QWORD *)this + 11)) + 476) = 1064011039;
  return Caver::StoreView::AnimateIn(*((Caver::StoreView **)this + 11));
}

