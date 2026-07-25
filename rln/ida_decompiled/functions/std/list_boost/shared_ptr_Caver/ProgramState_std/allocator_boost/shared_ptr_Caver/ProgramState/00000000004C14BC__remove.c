/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004C14BC
 * Mangled: _ZNSt4listIN5boost10shared_ptrIN5Caver12ProgramStateEEESaIS4_EE6removeERKS4_
 * Demangled: std::list<boost::shared_ptr<Caver::ProgramState>,std::allocator<boost::shared_ptr<Caver::ProgramState>>>::remove(boost::shared_ptr<Caver::ProgramState> const&)
 *
 * Callers: 1
 *   0x0000000000202DA0  std::list<boost::shared_ptr<Caver::ProgramState>,std::allocator<boost::shared_ptr<Caver::ProgramState>>>::remove(boost::shared_ptr<Caver::ProgramState> const&)
 *
 * Callees: 2
 *   0x00000000001F72B0  operator delete(void *)
 *   0x000000000052A9C8  sub_52A9C8
 *
 * Referenced strings: 19
 *   insn=0x00000000004C14F4 string=0x00000000004C14F8 "\tA"
 *   insn=0x00000000004C14FC string=0x00000000004C1500 "?"
 *   insn=0x00000000004C1500 string=0x00000000004C1504 "A"
 *   insn=0x00000000004C150C string=0x00000000004C1510 "."
 *   insn=0x00000000004C1514 string=0x00000000004C1518 "7"
 *   insn=0x00000000004C151C string=0x00000000004C1520 ""
 *   insn=0x00000000004C1530 string=0x00000000004C1534 "\t@"
 *   insn=0x00000000004C153C string=0x00000000004C1540 ""
 *   insn=0x00000000004C1550 string=0x00000000004C1554 "@"
 *   insn=0x00000000004C155C string=0x00000000004C1560 "T"
 *   insn=0x00000000004C1560 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000004C1578 string=0x00000000004C157C "`"
 *   insn=0x00000000004C1584 string=0x00000000004C1588 "t"
 *   insn=0x00000000004C1588 string=0x00000000004C158C "4"
 *   insn=0x00000000004C1590 string=0x00000000004C1594 ""
 *   insn=0x00000000004C15A4 string=0x00000000004C15A8 "\t@"
 *   insn=0x00000000004C15B0 string=0x00000000004C15B4 ""
 *   insn=0x00000000004C15C4 string=0x00000000004C15C8 "@"
 *   insn=0x00000000004C15E0 string=0x00000000004C15E4 "3"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall std::list<boost::shared_ptr<Caver::ProgramState>>::remove(_QWORD *a1, _QWORD *a2)
{
  _QWORD *v3; // x0
  _QWORD *v5; // x19
  _QWORD *v6; // x24
  _QWORD *v7; // x22
  _QWORD *v8; // x8
  _QWORD *v9; // x8
  __int64 v10; // t1
  _QWORD *v11; // x23
  __int64 v12; // x8
  __int64 v13; // x8
  _QWORD *v14; // x20
  __int64 v15; // x8
  __int64 v16; // x8

  v3 = (_QWORD *)*a1;
  v5 = a1;
  if ( a1 != v3 )
  {
    v6 = v3;
    do
    {
      v7 = v6;
      v8 = v6;
      v6 = (_QWORD *)*v6;
      v10 = v8[2];
      v9 = v8 + 2;
      if ( v10 == *a2 )
      {
        if ( v9 == a2 )
        {
          v5 = v7;
        }
        else
        {
          sub_52A9C8(v3);
          v11 = (_QWORD *)v7[3];
          if ( v11 )
          {
            v12 = v11[1] - 1LL;
            v11[1] = v12;
            if ( !v12 )
            {
              (*(void (__fastcall **)(_QWORD *))(*v11 + 16LL))(v11);
              v13 = v11[2] - 1LL;
              v11[2] = v13;
              if ( !v13 )
                (*(void (__fastcall **)(_QWORD *))(*v11 + 24LL))(v11);
            }
          }
          operator delete(v7);
        }
      }
      v3 = v6;
    }
    while ( a1 != v6 );
  }
  if ( a1 != v5 )
  {
    sub_52A9C8(v5);
    v14 = (_QWORD *)v5[3];
    if ( v14 )
    {
      v15 = v14[1] - 1LL;
      v14[1] = v15;
      if ( !v15 )
      {
        (*(void (__fastcall **)(_QWORD *))(*v14 + 16LL))(v14);
        v16 = v14[2] - 1LL;
        v14[2] = v16;
        if ( !v16 )
          (*(void (__fastcall **)(_QWORD *))(*v14 + 24LL))(v14);
      }
    }
    operator delete(v5);
  }
}

