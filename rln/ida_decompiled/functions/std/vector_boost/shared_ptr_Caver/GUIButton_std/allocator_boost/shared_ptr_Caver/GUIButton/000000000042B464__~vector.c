/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000042B464
 * Mangled: _ZNSt6vectorIN5boost10shared_ptrIN5Caver9GUIButtonEEESaIS4_EED2Ev
 * Demangled: std::vector<boost::shared_ptr<Caver::GUIButton>,std::allocator<boost::shared_ptr<Caver::GUIButton>>>::~vector()
 *
 * Callers: 1
 *   0x0000000000200BA0  std::vector<boost::shared_ptr<Caver::GUIButton>,std::allocator<boost::shared_ptr<Caver::GUIButton>>>::~vector()
 *
 * Callees: 3
 *   0x00000000001F72B0  operator delete(void *)
 *   0x000000000042B520  Caver::NewMenuView::LayoutSubviews(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 11
 *   insn=0x000000000042B480 string=0x000000000042B484 "u"
 *   insn=0x000000000042B484 string=0x000000000042B488 "5"
 *   insn=0x000000000042B488 string=0x000000000042B4CC "sB"
 *   insn=0x000000000042B48C string=0x000000000042B490 ""
 *   insn=0x000000000042B49C string=0x000000000042B4A0 "\t@"
 *   insn=0x000000000042B4AC string=0x000000000042B4B0 ""
 *   insn=0x000000000042B4BC string=0x000000000042B4C0 "@"
 *   insn=0x000000000042B4EC string=0x000000000042B4F0 "p/"
 *   insn=0x000000000042B4F0 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000042B508 string=0x000000000042B50C "h"
 *   insn=0x000000000042B510 string=0x000000000042B514 "g/"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall std::vector<boost::shared_ptr<Caver::GUIButton>>::~vector(__int64 a1)
{
  _QWORD *v2; // x19
  _QWORD *v3; // x22
  _QWORD *v4; // x21
  __int64 v5; // x8
  __int64 v6; // x8

  v2 = *(_QWORD **)a1;
  v3 = *(_QWORD **)(a1 + 8);
  if ( *(_QWORD **)a1 != v3 )
  {
    do
    {
      v4 = (_QWORD *)v2[1];
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
      v2 += 2;
    }
    while ( v3 != v2 );
    v2 = *(_QWORD **)a1;
  }
  if ( v2 )
    operator delete(v2);
}

