/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003B126C
 * Mangled: _ZNSt3mapISsN5boost10shared_ptrIN5Caver11EntityClassEEESt4lessISsESaISt4pairIKSsS4_EEEixERS8_
 * Demangled: std::map<std::string,boost::shared_ptr<Caver::EntityClass>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::EntityClass>>>>::operator[](std::string const&)
 *
 * Callers: 1
 *   0x00000000001FCA20  std::map<std::string,boost::shared_ptr<Caver::EntityClass>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::EntityClass>>>>::operator[](std::string const&)
 *
 * Callees: 10
 *   0x00000000001F3400  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::EntityClass>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::EntityClass>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::EntityClass>>>>::_M_create_node(std::pair<std::string const,boost::shared_ptr<Caver::EntityClass>> const&)
 *   0x00000000001F5190  .memcmp
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FFC20  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::EntityClass>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::EntityClass>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::EntityClass>>>>::_M_get_insert_hint_unique_pos(std::_Rb_tree_const_iterator<std::pair<std::string const,boost::shared_ptr<Caver::EntityClass>>>,std::string const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000054C8A0  sub_54C8A0
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 96
 *   insn=0x00000000003B1288 string=0x00000000003B128C "H"
 *   insn=0x00000000003B1290 string=0x00000000003B1294 ""
 *   insn=0x00000000003B12A8 string=0x00000000003B12AC "7"
 *   insn=0x00000000003B12CC string=0x00000000003B12D0 ""
 *   insn=0x00000000003B12D4 string=0x00000000003B12D8 """
 *   insn=0x00000000003B12DC string=0x00000000001F5190 "P'"
 *   insn=0x00000000003B12E0 string=0x00000000003B12E4 "@"
 *   insn=0x00000000003B12F0 string=0x00000000003B12F4 ""
 *   insn=0x00000000003B1330 string=0x00000000003B1334 "@"
 *   insn=0x00000000003B1338 string=0x00000000003B133C "a"
 *   insn=0x00000000003B133C string=0x00000000003B1340 ""
 *   insn=0x00000000003B1340 string=0x00000000003B1344 ")"
 *   insn=0x00000000003B1348 string=0x00000000003B134C """
 *   insn=0x00000000003B1350 string=0x00000000003B1354 "`\n"
 *   insn=0x00000000003B1360 string=0x00000000003B1364 "q"
 *   insn=0x00000000003B1374 string=0x00000000003B1378 "*:"
 *   insn=0x00000000003B1380 string=0x00000000003B1384 "6"
 *   insn=0x00000000003B1388 string=0x00000000003B138C "s"
 *   insn=0x00000000003B1390 string=0x00000000003B1394 " "
 *   insn=0x00000000003B139C string=0x00000000003B13A0 ""
 *   insn=0x00000000003B13A0 string=0x00000000003B13A4 ")"
 *   insn=0x00000000003B13A8 string=0x00000000003B13AC """
 *   insn=0x00000000003B13AC string=0x00000000003B13B0 "x"
 *   insn=0x00000000003B13CC string=0x00000000003B13D0 "`"
 *   insn=0x00000000003B13DC string=0x00000000003B13E0 ""
 *   insn=0x00000000003B13E0 string=0x00000000001F3400 "P'"
 *   insn=0x00000000003B13F4 string=0x00000000003B13F8 "*m"
 *   insn=0x00000000003B13FC string=0x00000000003B1400 ""
 *   insn=0x00000000003B1408 string=0x00000000003B140C "4"
 *   insn=0x00000000003B1410 string=0x00000000003B1414 ""
 *   insn=0x00000000003B1420 string=0x00000000003B1424 "\t@"
 *   insn=0x00000000003B1430 string=0x00000000003B1434 ""
 *   insn=0x00000000003B1440 string=0x00000000003B1444 "@"
 *   insn=0x00000000003B1454 string=0x00000000003B1458 ")"
 *   insn=0x00000000003B1468 string=0x00000000003B146C ""
 *   insn=0x00000000003B1478 string=0x00000000003B147C "`"
 *   insn=0x00000000003B1478 string=0x00000000003B1508 "r"
 *   insn=0x00000000003B14B8 string=0x00000000003B14BC "`"
 *   insn=0x00000000003B14C4 string=0x00000000003B14C8 ")=G"
 *   insn=0x00000000003B14C8 string=0x00000000003B14CC "!"
 *   insn=0x00000000003B14D0 string=0x00000000003B14D4 "\t"
 *   insn=0x00000000003B14D0 string=0x00000000003B14E8 "\t"
 *   insn=0x00000000003B14D4 string=0x00000000003B14D8 "*"
 *   insn=0x00000000003B14D8 string=0x00000000003B14DC "\n"
 *   insn=0x00000000003B14E4 string=0x00000000003B14F4 "?"
 *   insn=0x00000000003B14E8 string=0x00000000003B14EC "*"
 *   insn=0x00000000003B14EC string=0x00000000003B14F0 "\n"
 *   insn=0x00000000003B1508 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000003B1510 string=0x00000000003B1514 "J"
 *   insn=0x00000000003B1518 string=0x00000000003B151C "(a"
 *   insn=0x00000000003B1528 string=0x00000000003B152C "J=G"
 *   insn=0x00000000003B152C string=0x00000000003B1530 ")!"
 *   insn=0x00000000003B1534 string=0x00000000003B1538 "*"
 *   insn=0x00000000003B1534 string=0x00000000003B1564 "*"
 *   insn=0x00000000003B1538 string=0x00000000003B153C "K"
 *   insn=0x00000000003B153C string=0x00000000003B1540 "+"
 *   insn=0x00000000003B1544 string=0x00000000003B1548 "_"
 *   insn=0x00000000003B1548 string=0x00000000003B154C "l"
 *   insn=0x00000000003B1564 string=0x00000000003B1568 "K"
 *   insn=0x00000000003B1568 string=0x00000000003B156C "+"
 *   insn=0x00000000003B156C string=0x00000000003B1570 "_"
 *   insn=0x00000000003B1574 string=0x00000000003B1578 "0"
 *   insn=0x00000000003B158C string=0x00000000003B1590 "4"
 *   insn=0x00000000003B1594 string=0x00000000003B1598 ""
 *   insn=0x00000000003B15A4 string=0x00000000003B15A8 "\t@"
 *   insn=0x00000000003B15B4 string=0x00000000003B15B8 ""
 *   insn=0x00000000003B15C4 string=0x00000000003B15C8 "@"
 *   insn=0x00000000003B15D8 string=0x00000000003B15DC ")"
 *   insn=0x00000000003B15EC string=0x00000000003B15F0 ")=G"
 *   insn=0x00000000003B15F0 string=0x00000000003B15F4 "!"
 *   insn=0x00000000003B15F4 string=0x00000000003B15F8 "i"
 *   insn=0x00000000003B15F8 string=0x00000000003B15FC "\t"
 *   insn=0x00000000003B15F8 string=0x00000000003B1624 "\t"
 *   insn=0x00000000003B15FC string=0x00000000003B1600 "*"
 *   insn=0x00000000003B1600 string=0x00000000003B1604 "\n"
 *   insn=0x00000000003B1608 string=0x00000000003B160C "?"
 *   insn=0x00000000003B160C string=0x00000000003B1610 "L"
 *   insn=0x00000000003B1614 string=0x00000000003B1618 "c"
 *   insn=0x00000000003B1624 string=0x00000000003B1628 "*"
 *   insn=0x00000000003B1628 string=0x00000000003B162C "\n"
 *   insn=0x00000000003B162C string=0x00000000003B1630 "?"
 *   insn=0x00000000003B1630 string=0x00000000003B1634 ""
 *   insn=0x00000000003B1644 string=0x00000000003B1648 "J"
 *   insn=0x00000000003B164C string=0x00000000003B1650 "(a"
 *   insn=0x00000000003B165C string=0x00000000003B1660 "J=G"
 *   insn=0x00000000003B1660 string=0x00000000003B1664 ")!"
 *   insn=0x00000000003B1668 string=0x00000000003B166C "*"
 *   insn=0x00000000003B1668 string=0x00000000003B1698 "*"
 *   insn=0x00000000003B166C string=0x00000000003B1670 "K"
 *   insn=0x00000000003B1670 string=0x00000000003B1674 "+"
 *   insn=0x00000000003B1678 string=0x00000000003B167C "_"
 *   insn=0x00000000003B1688 string=0x00000000003B168C "F"
 *   insn=0x00000000003B1690 string=0x00000000003B1694 ".s"
 *   insn=0x00000000003B1698 string=0x00000000003B169C "K"
 *   insn=0x00000000003B169C string=0x00000000003B16A0 "+"
 *   insn=0x00000000003B16A0 string=0x00000000003B16A4 "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall std::map<std::string,boost::shared_ptr<Caver::EntityClass>>::operator[](__int64 a1, const void **a2)
{
  __int64 node; // x19
  _QWORD *v3; // x28
  const void *v4; // x23
  const void **v5; // x22
  unsigned __int64 v6; // x25
  __int64 v7; // x20
  _QWORD *v8; // x0
  unsigned __int64 v9; // x8
  __int64 v10; // x21
  size_t v11; // x2
  int v12; // w0
  int v13; // w0
  _QWORD *v14; // x1
  unsigned __int64 v15; // x8
  unsigned __int64 v16; // x9
  __int64 v17; // x23
  size_t v18; // x2
  int v19; // w0
  __int64 insert_hint_unique_pos; // x0
  __int64 v21; // x1
  __int64 v22; // x22
  unsigned int v23; // w23
  _QWORD *v24; // x1
  unsigned __int64 v25; // x8
  unsigned __int64 v26; // x9
  __int64 v27; // x19
  size_t v28; // x2
  unsigned int v29; // w0
  _QWORD *v30; // x20
  __int64 v31; // x8
  __int64 v32; // x8
  char *v33; // x0
  int v35; // w0
  unsigned int *v36; // x8
  int v37; // w9
  void *v39[2]; // [xsp+18h] [xbp-78h] BYREF
  _QWORD *v40; // [xsp+28h] [xbp-68h]
  __int64 v41; // [xsp+38h] [xbp-58h]

  node = a1 + 8;
  v41 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v3 = *(_QWORD **)(a1 + 16);
  if ( v3 )
  {
    v4 = *a2;
    v5 = a2;
    v6 = *((_QWORD *)*a2 - 3);
    v7 = a1 + 8;
    while ( 1 )
    {
      while ( 1 )
      {
        v8 = (_QWORD *)v3[4];
        v9 = *(v8 - 3);
        v10 = v9 - v6;
        v11 = v9 <= v6 ? *(v8 - 3) : v6;
        v12 = memcmp(v8, v4, v11);
        if ( v12 )
          break;
        if ( v10 <= 0x7FFFFFFF )
        {
          v13 = v10 <= (__int64)0xFFFFFFFF80000000LL ? 0x80000000 : v10;
          if ( v13 < 0 )
            goto LABEL_8;
        }
LABEL_15:
        node = (__int64)v3;
        v3 = (_QWORD *)v3[2];
        if ( !v3 )
          goto LABEL_18;
      }
      if ( (v12 & 0x80000000) == 0 )
        goto LABEL_15;
LABEL_8:
      v3 = (_QWORD *)v3[3];
      if ( !v3 )
        goto LABEL_18;
    }
  }
  v5 = a2;
  v7 = a1 + 8;
LABEL_18:
  if ( node != v7 )
  {
    v14 = *(_QWORD **)(node + 32);
    v15 = *((_QWORD *)*v5 - 3);
    v16 = *(v14 - 3);
    v17 = v15 - v16;
    if ( v15 <= v16 )
      v18 = *((_QWORD *)*v5 - 3);
    else
      v18 = *(v14 - 3);
    v19 = memcmp(*v5, v14, v18);
    if ( v19 )
    {
      if ( (v19 & 0x80000000) == 0 )
        return node + 40;
    }
    else
    {
      if ( v17 > 0x7FFFFFFF )
        return node + 40;
      v35 = v17 <= (__int64)0xFFFFFFFF80000000LL ? 0x80000000 : v17;
      if ( (v35 & 0x80000000) == 0 )
        return node + 40;
    }
  }
  sub_56A528(v39, v5);
  v39[1] = 0;
  v40 = 0;
  insert_hint_unique_pos = std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::EntityClass>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::EntityClass>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::EntityClass>>>>::_M_get_insert_hint_unique_pos();
  node = insert_hint_unique_pos;
  v22 = v21;
  if ( v21 )
  {
    v23 = 1;
    if ( !insert_hint_unique_pos && v7 != v21 )
    {
      v24 = *(_QWORD **)(v21 + 32);
      v25 = *((_QWORD *)v39[0] - 3);
      v26 = *(v24 - 3);
      v27 = v25 - v26;
      if ( v25 <= v26 )
        v28 = *((_QWORD *)v39[0] - 3);
      else
        v28 = *(v24 - 3);
      v29 = memcmp(v39[0], v24, v28);
      if ( !v29 )
      {
        v29 = 0x7FFFFFFF;
        if ( v27 <= 0x7FFFFFFF )
        {
          if ( v27 <= (__int64)0xFFFFFFFF80000000LL )
            v29 = 0x80000000;
          else
            v29 = v27;
        }
      }
      v23 = v29 >> 31;
    }
    node = std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::EntityClass>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::EntityClass>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::EntityClass>>>>::_M_create_node();
    sub_54C8A0(v23, node, v22, v7);
    ++*(_QWORD *)(a1 + 40);
  }
  v30 = v40;
  if ( v40 )
  {
    v31 = v40[1] - 1LL;
    v40[1] = v31;
    if ( !v31 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v30 + 16LL))(v30);
      v32 = v30[2] - 1LL;
      v30[2] = v32;
      if ( !v32 )
        (*(void (__fastcall **)(_QWORD *))(*v30 + 24LL))(v30);
    }
  }
  v33 = (char *)v39[0] - 24;
  if ( (char *)v39[0] - 24 != (char *)&qword_6FD2E0 )
  {
    v36 = (unsigned int *)((char *)v39[0] - 8);
    if ( &pthread_create )
    {
      do
        v37 = __ldaxr(v36);
      while ( __stlxr(v37 - 1, v36) );
    }
    else
    {
      v37 = (*v36)--;
    }
    if ( v37 <= 0 )
      operator delete(v33);
  }
  return node + 40;
}

