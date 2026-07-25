/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000046A4CC
 * Mangled: _ZN5Caver10FastVectorIN5boost10shared_ptrINS_15PointLightGroupEEEED2Ev
 * Demangled: Caver::FastVector<boost::shared_ptr<Caver::PointLightGroup>>::~FastVector()
 *
 * Callers: 1
 *   0x0000000000203E00  Caver::FastVector<boost::shared_ptr<Caver::PointLightGroup>>::~FastVector()
 *
 * Callees: 7
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F5190  .memcmp
 *   0x00000000001FBBE0  std::_Rb_tree<std::string,std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObject>>,std::_Select1st<std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObject>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObject>>>>::_M_get_insert_unique_pos(std::string const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000054C640  sub_54C640
 *   0x000000000054C700  sub_54C700
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 49
 *   insn=0x000000000046A4E8 string=0x000000000046A4EC "h"
 *   insn=0x000000000046A4FC string=0x000000000046A500 "4"
 *   insn=0x000000000046A504 string=0x000000000046A508 ""
 *   insn=0x000000000046A514 string=0x000000000046A518 "\t@"
 *   insn=0x000000000046A524 string=0x000000000046A528 ""
 *   insn=0x000000000046A534 string=0x000000000046A538 "@"
 *   insn=0x000000000046A560 string=0x00000000001F4F60 "P'"
 *   insn=0x000000000046A588 string=0x000000000046A58C "5"
 *   insn=0x000000000046A590 string=0x000000000046A594 ""
 *   insn=0x000000000046A5A0 string=0x000000000046A5A4 "\t@"
 *   insn=0x000000000046A5B0 string=0x000000000046A5B4 ""
 *   insn=0x000000000046A5C0 string=0x000000000046A5C4 "@"
 *   insn=0x000000000046A5D4 string=0x000000000046A5D8 "a"
 *   insn=0x000000000046A5DC string=0x000000000046A5E0 "`*"
 *   insn=0x000000000046A5E8 string=0x000000000046A5EC "X"
 *   insn=0x000000000046A618 string=0x000000000046A61C "`"
 *   insn=0x000000000046A620 string=0x000000000046A624 "w"
 *   insn=0x000000000046A638 string=0x000000000046A63C """
 *   insn=0x000000000046A640 string=0x00000000001F5190 "P'"
 *   insn=0x000000000046A648 string=0x000000000046A6DC ":"
 *   insn=0x000000000046A658 string=0x000000000046A65C ")"
 *   insn=0x000000000046A668 string=0x000000000046A66C ""
 *   insn=0x000000000046A680 string=0x000000000046A684 "c"
 *   insn=0x000000000046A698 string=0x000000000046A69C ")"
 *   insn=0x000000000046A69C string=0x000000000046A6A0 ""
 *   insn=0x000000000046A6A4 string=0x000000000046A6A8 """
 *   insn=0x000000000046A6B0 string=0x000000000046A6B4 "@\t"
 *   insn=0x000000000046A6B4 string=0x000000000046A6B8 "="
 *   insn=0x000000000046A6BC string=0x000000000046A6C0 "_"
 *   insn=0x000000000046A6C8 string=0x000000000046A6CC "_"
 *   insn=0x000000000046A6D0 string=0x000000000046A6D4 "@"
 *   insn=0x000000000046A6FC string=0x000000000046A700 "`"
 *   insn=0x000000000046A714 string=0x000000000046A718 "("
 *   insn=0x000000000046A72C string=0x000000000046A730 "?"
 *   insn=0x000000000046A730 string=0x000000000046A734 "L"
 *   insn=0x000000000046A738 string=0x000000000046A73C "?"
 *   insn=0x000000000046A740 string=0x000000000046A744 " "
 *   insn=0x000000000046A748 string=0x000000000046A74C "h"
 *   insn=0x000000000046A754 string=0x000000000046A758 "w"
 *   insn=0x000000000046A75C string=0x000000000046A760 "$"
 *   insn=0x000000000046A764 string=0x000000000046A768 "_"
 *   insn=0x000000000046A770 string=0x000000000046A774 "_"
 *   insn=0x000000000046A778 string=0x000000000046A77C "@"
 *   insn=0x000000000046A790 string=0x000000000046A794 "L"
 *   insn=0x000000000046A7A0 string=0x000000000046A7A4 "`"
 *   insn=0x000000000046A7BC string=0x000000000046A7C0 "?"
 *   insn=0x000000000046A7C8 string=0x000000000046A7CC "?"
 *   insn=0x000000000046A7D0 string=0x000000000046A7D4 " "
 *   insn=0x000000000046A7E4 string=0x00000000001FBBE0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::FastVector<boost::shared_ptr<Caver::PointLightGroup>>::~FastVector(__int64 a1)
{
  __int64 v1; // x22
  __int64 v2; // x8
  __int64 v3; // x23
  _QWORD *v4; // x20
  __int64 v5; // x8
  __int64 v6; // x8

  v1 = *(_QWORD *)(a1 + 8);
  if ( v1 )
  {
    v2 = *(_QWORD *)(v1 - 8);
    if ( v2 )
    {
      v3 = 16 * v2;
      do
      {
        v4 = *(_QWORD **)(v1 + v3 - 8);
        if ( v4 )
        {
          v5 = v4[1] - 1LL;
          v4[1] = v5;
          if ( !v5 )
          {
            (*(void (__fastcall **)(_QWORD *))(*v4 + 16LL))(v4);
            v6 = v4[2] - 1LL;
            v4[2] = v6;
            if ( !v6 )
              (*(void (__fastcall **)(_QWORD *))(*v4 + 24LL))(v4);
          }
        }
        v3 -= 16;
      }
      while ( v3 );
    }
    operator delete[]((void *)(v1 - 8));
  }
}

