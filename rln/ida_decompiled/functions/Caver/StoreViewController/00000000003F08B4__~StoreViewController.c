/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003F08B4
 * Mangled: _ZN5Caver19StoreViewControllerD0Ev
 * Demangled: Caver::StoreViewController::~StoreViewController()
 *
 * Callers: 1
 *   0x00000000003F0554  Caver::StoreViewController::~StoreViewController()
 *
 * Callees: 4
 *   0x00000000001F6C40  Caver::StoreViewController::~StoreViewController()
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000003F08EC  Caver::StoreViewController::LoadView(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 4
 *   insn=0x00000000003F08C4 string=0x00000000001F6C40 "0'"
 *   insn=0x00000000003F08D0 string=0x00000000003F08D4 "w"
 *   insn=0x00000000003F08D4 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000003F08DC string=0x00000000003F08E0 "t"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::StoreViewController::~StoreViewController(Caver::StoreViewController *this)
{
  Caver::StoreViewController::~StoreViewController(this);
  operator delete(this);
}

