/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002B1320
 * Mangled: _ZN5Caver23BushControllerComponentC2Ev
 * Demangled: Caver::BushControllerComponent::BushControllerComponent(void)
 *
 * Callers: 2
 *   0x00000000001FA2C0  Caver::BushControllerComponent::BushControllerComponent(void)
 *   0x0000000000200860  Caver::BushControllerComponent::BushControllerComponent(void)
 *
 * Callees: 9
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F6CE0  Caver::Component::BindOutlet(int,std::string const&,Caver::ComponentOutletBase *,bool)
 *   0x00000000001FA4D0  Caver::Component::~Component()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 112
 *   insn=0x00000000002B1340 string=0x00000000002B1344 "Y"
 *   insn=0x00000000002B1344 string=0x00000000002B1348 "Z"
 *   insn=0x00000000002B1348 string=0x00000000002B134C ")"
 *   insn=0x00000000002B1354 string=0x00000000002B1358 "+"
 *   insn=0x00000000002B1358 string=0x00000000002B135C "*"
 *   insn=0x00000000002B1364 string=0x00000000002B1368 "@"
 *   insn=0x00000000002B1368 string=0x00000000002B136C "*"
 *   insn=0x00000000002B1374 string=0x00000000002B1378 "@"
 *   insn=0x00000000002B1378 string=0x00000000002B137C "Jc"
 *   insn=0x00000000002B1380 string=0x00000000002B1384 "j"
 *   insn=0x00000000002B1398 string=0x00000000002B139C ")A"
 *   insn=0x00000000002B139C string=0x00000000002B13A0 "h"
 *   insn=0x00000000002B13A8 string=0x00000000002B13AC "i"
 *   insn=0x00000000002B13B8 string=0x00000000002B13BC "`"
 *   insn=0x00000000002B13C0 string=0x00000000002B13C4 "C"
 *   insn=0x00000000002B13EC string=0x0000000000589B24 "wobbleAnimation"
 *   insn=0x00000000002B1410 string=0x00000000002B1414 "3"
 *   insn=0x00000000002B1414 string=0x00000000001F6CE0 "0'"
 *   insn=0x00000000002B1420 string=0x00000000002B1424 "A"
 *   insn=0x00000000002B1428 string=0x0000000000589B34 "wobbleSound"
 *   insn=0x00000000002B144C string=0x00000000002B1450 "$"
 *   insn=0x00000000002B1464 string=0x0000000000589B40 "cutSound"
 *   insn=0x00000000002B149C string=0x00000000002B14A0 "("
 *   insn=0x00000000002B14A8 string=0x00000000002B14AC "a"
 *   insn=0x00000000002B14AC string=0x00000000002B1598 "N"
 *   insn=0x00000000002B14CC string=0x00000000002B14D0 ")=G"
 *   insn=0x00000000002B14D0 string=0x00000000002B14D4 "!"
 *   insn=0x00000000002B14D4 string=0x00000000002B14D8 "\t"
 *   insn=0x00000000002B14D8 string=0x00000000002B14DC "\t"
 *   insn=0x00000000002B14D8 string=0x00000000002B1538 "\t"
 *   insn=0x00000000002B14DC string=0x00000000002B14E0 "*"
 *   insn=0x00000000002B14E0 string=0x00000000002B14E4 "\n"
 *   insn=0x00000000002B14EC string=0x00000000002B1544 "?"
 *   insn=0x00000000002B14F0 string=0x00000000002B14F4 ")=G"
 *   insn=0x00000000002B14F4 string=0x00000000002B14F8 "!"
 *   insn=0x00000000002B14FC string=0x00000000002B1500 "\t"
 *   insn=0x00000000002B14FC string=0x00000000002B1558 "\t"
 *   insn=0x00000000002B1500 string=0x00000000002B1504 "*"
 *   insn=0x00000000002B1504 string=0x00000000002B1508 "\n"
 *   insn=0x00000000002B1510 string=0x00000000002B1564 "?"
 *   insn=0x00000000002B1514 string=0x00000000002B1518 ")=G"
 *   insn=0x00000000002B1518 string=0x00000000002B151C "!"
 *   insn=0x00000000002B1520 string=0x00000000002B1524 "\t"
 *   insn=0x00000000002B1520 string=0x00000000002B1578 "\t"
 *   insn=0x00000000002B1524 string=0x00000000002B1528 "*"
 *   insn=0x00000000002B1528 string=0x00000000002B152C "\n"
 *   insn=0x00000000002B1534 string=0x00000000002B1584 "?"
 *   insn=0x00000000002B1538 string=0x00000000002B153C "*"
 *   insn=0x00000000002B153C string=0x00000000002B1540 "\n"
 *   insn=0x00000000002B1558 string=0x00000000002B155C "*"
 *   insn=0x00000000002B155C string=0x00000000002B1560 "\n"
 *   insn=0x00000000002B1578 string=0x00000000002B157C "*"
 *   insn=0x00000000002B157C string=0x00000000002B1580 "\n"
 *   insn=0x00000000002B1598 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000002B15A0 string=0x00000000002B15A4 "(a"
 *   insn=0x00000000002B15AC string=0x00000000002B167C "`Z@"
 *   insn=0x00000000002B15B0 string=0x00000000002B15B4 "J=G"
 *   insn=0x00000000002B15B4 string=0x00000000002B15B8 ")!"
 *   insn=0x00000000002B15B8 string=0x00000000002B15BC "*"
 *   insn=0x00000000002B15BC string=0x00000000002B15C0 "*"
 *   insn=0x00000000002B15BC string=0x00000000002B1660 "*"
 *   insn=0x00000000002B15C0 string=0x00000000002B15C4 "K"
 *   insn=0x00000000002B15C4 string=0x00000000002B15C8 "+"
 *   insn=0x00000000002B15D0 string=0x00000000002B1648 "_"
 *   insn=0x00000000002B15DC string=0x00000000002B15E0 "(a"
 *   insn=0x00000000002B15EC string=0x00000000002B15F0 "J=G"
 *   insn=0x00000000002B15F0 string=0x00000000002B15F4 ")!"
 *   insn=0x00000000002B15F4 string=0x00000000002B15F8 "J"
 *   insn=0x00000000002B15F8 string=0x00000000002B15FC "*"
 *   insn=0x00000000002B15FC string=0x00000000002B1600 "K"
 *   insn=0x00000000002B1600 string=0x00000000002B1604 "+"
 *   insn=0x00000000002B1618 string=0x00000000002B161C "(a"
 *   insn=0x00000000002B1628 string=0x00000000002B162C "J=G"
 *   insn=0x00000000002B162C string=0x00000000002B1630 ")!"
 *   insn=0x00000000002B1630 string=0x00000000002B1634 "j"
 *   insn=0x00000000002B1634 string=0x00000000002B1638 "*"
 *   insn=0x00000000002B1638 string=0x00000000002B163C "K"
 *   insn=0x00000000002B163C string=0x00000000002B1640 "+"
 *   insn=0x00000000002B1654 string=0x00000000002B1658 "S"
 *   insn=0x00000000002B1658 string=0x00000000002B165C ""
 *   insn=0x00000000002B1660 string=0x00000000002B1664 "K"
 *   insn=0x00000000002B1664 string=0x00000000002B1668 "+"
 *   insn=0x00000000002B1668 string=0x00000000002B166C "_"
 *   insn=0x00000000002B166C string=0x00000000002B1670 ""
 *   insn=0x00000000002B1680 string=0x00000000002B1684 "uR"
 *   insn=0x00000000002B1688 string=0x00000000002B168C "@"
 *   insn=0x00000000002B1688 string=0x00000000002B16A8 "`N@"
 *   insn=0x00000000002B168C string=0x00000000002B1690 ""
 *   insn=0x00000000002B1690 string=0x00000000002B1694 ""
 *   insn=0x00000000002B1698 string=0x00000000002B169C ""
 *   insn=0x00000000002B169C string=0x00000000002B16A0 ""
 *   insn=0x00000000002B16A8 string=0x00000000002B16AC "uF"
 *   insn=0x00000000002B16B0 string=0x00000000002B16B4 "@"
 *   insn=0x00000000002B16B0 string=0x00000000002B16D0 "`B@"
 *   insn=0x00000000002B16B4 string=0x00000000002B16B8 ""
 *   insn=0x00000000002B16B8 string=0x00000000002B16BC ""
 *   insn=0x00000000002B16C0 string=0x00000000002B16C4 ""
 *   insn=0x00000000002B16C4 string=0x00000000002B16C8 ""
 *   insn=0x00000000002B16D4 string=0x00000000002B16D8 "h:"
 *   insn=0x00000000002B16DC string=0x00000000002B16E0 "@"
 *   insn=0x00000000002B16E0 string=0x00000000002B16E4 ""
 *   insn=0x00000000002B16E4 string=0x00000000002B16E8 ""
 *   insn=0x00000000002B16EC string=0x00000000002B16F0 ""
 *   insn=0x00000000002B16F0 string=0x00000000002B16F4 ""
 *   insn=0x00000000002B16FC string=0x00000000002B1700 "t#"
 *   insn=0x00000000002B1700 string=0x00000000001FA4D0 "0'"
 *   insn=0x00000000002B1704 string=0x00000000002B1708 "o@"
 *   insn=0x00000000002B171C string=0x00000000002B1720 "h"@"
 *   insn=0x00000000002B1724 string=0x00000000002B1728 "a"
 *   insn=0x00000000002B1734 string=0x00000000002B1738 "hz@"
 *   insn=0x00000000002B173C string=0x00000000002B1740 "h"
 *   insn=0x00000000002B1744 string=0x00000000002B1748 "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::BushControllerComponent::BushControllerComponent(Caver::BushControllerComponent *this)
{
  __int128 v1; // q0
  void *v2; // x0
  void *v3; // x0
  void *v4; // x0
  unsigned int *v5; // x8
  int v6; // w9
  unsigned int *v7; // x8
  int v8; // w9
  unsigned int *v9; // x8
  int v10; // w9
  _QWORD v11[3]; // [xsp+28h] [xbp-58h] BYREF

  *(_QWORD *)&v1 = &off_6C41E8;
  *((_QWORD *)&v1 + 1) = &off_6C4228;
  v11[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  *((_QWORD *)this + 7) = &byte_6FD2F8;
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 4) = 0;
  *((_QWORD *)this + 5) = 0;
  *((_BYTE *)this + 48) = 0;
  *((_QWORD *)this + 9) = 0;
  *((_QWORD *)this + 11) = (char *)this + 72;
  *((_QWORD *)this + 12) = (char *)this + 72;
  *(_QWORD *)this = off_6C40D0;
  *((_QWORD *)this + 10) = 0;
  *((_QWORD *)this + 13) = 0;
  *((_OWORD *)this + 1) = v1;
  *((_QWORD *)this + 14) = &off_6BDF68;
  *((_DWORD *)this + 30) = 0;
  *((_QWORD *)this + 16) = 0;
  *((_QWORD *)this + 17) = off_6BE248;
  *((_DWORD *)this + 36) = 0;
  *((_QWORD *)this + 20) = off_6BE248;
  *((_QWORD *)this + 19) = 0;
  *((_DWORD *)this + 42) = 0;
  *((_QWORD *)this + 22) = 0;
  *((_BYTE *)this + 184) = 0;
  sub_566BB8((int)v11, "wobbleAnimation");
  Caver::Component::BindOutlet();
  v2 = (void *)(v11[0] - 24LL);
  if ( (__int64 *)(v11[0] - 24LL) != &qword_6FD2E0 )
  {
    v5 = (unsigned int *)(v11[0] - 8LL);
    if ( &pthread_create )
    {
      do
        v6 = __ldaxr(v5);
      while ( __stlxr(v6 - 1, v5) );
    }
    else
    {
      v6 = (*v5)--;
    }
    if ( v6 <= 0 )
      operator delete(v2);
  }
  sub_566BB8((int)v11, "wobbleSound");
  Caver::Component::BindOutlet();
  v3 = (void *)(v11[0] - 24LL);
  if ( (__int64 *)(v11[0] - 24LL) != &qword_6FD2E0 )
  {
    v7 = (unsigned int *)(v11[0] - 8LL);
    if ( &pthread_create )
    {
      do
        v8 = __ldaxr(v7);
      while ( __stlxr(v8 - 1, v7) );
    }
    else
    {
      v8 = (*v7)--;
    }
    if ( v8 <= 0 )
      operator delete(v3);
  }
  sub_566BB8((int)v11, "cutSound");
  Caver::Component::BindOutlet();
  v4 = (void *)(v11[0] - 24LL);
  if ( (__int64 *)(v11[0] - 24LL) != &qword_6FD2E0 )
  {
    v9 = (unsigned int *)(v11[0] - 8LL);
    if ( &pthread_create )
    {
      do
        v10 = __ldaxr(v9);
      while ( __stlxr(v10 - 1, v9) );
    }
    else
    {
      v10 = (*v9)--;
    }
    if ( v10 <= 0 )
      operator delete(v4);
  }
}

