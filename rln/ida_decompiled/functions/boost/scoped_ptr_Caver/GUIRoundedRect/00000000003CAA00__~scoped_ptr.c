/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003CAA00
 * Mangled: _ZN5boost10scoped_ptrIN5Caver14GUIRoundedRectEED2Ev
 * Demangled: boost::scoped_ptr<Caver::GUIRoundedRect>::~scoped_ptr()
 *
 * Callers: 2
 *   0x00000000002022D0  boost::scoped_ptr<Caver::GUIRoundedRect>::~scoped_ptr()
 *   0x00000000003CA1B8  Caver::ConsumableItemView::SetItem(boost::shared_ptr<Caver::Item> const&)
 *
 * Callees: 6
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FBC40  .memset
 *   0x0000000000203B40  Caver::GUIView::GUIView(void)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 40
 *   insn=0x00000000003CAA10 string=0x00000000003CAA14 "`F@"
 *   insn=0x00000000003CAA14 string=0x00000000003CAA18 "@"
 *   insn=0x00000000003CAA18 string=0x00000000003CAA1C "Q"
 *   insn=0x00000000003CAA18 string=0x00000000003CAA20 "`:@"
 *   insn=0x00000000003CAA1C string=0x00000000001F4F60 "P'"
 *   insn=0x00000000003CAA20 string=0x00000000003CAA24 "@"
 *   insn=0x00000000003CAA24 string=0x00000000003CAA28 "N"
 *   insn=0x00000000003CAA24 string=0x00000000003CAA2C "`*@"
 *   insn=0x00000000003CAA30 string=0x00000000003CAA34 "@"
 *   insn=0x00000000003CAA30 string=0x00000000003CAA50 "`"
 *   insn=0x00000000003CAA34 string=0x00000000003CAA38 ""
 *   insn=0x00000000003CAA38 string=0x00000000003CAA3C ""
 *   insn=0x00000000003CAA40 string=0x00000000003CAA44 ""
 *   insn=0x00000000003CAA44 string=0x00000000003CAA48 ""
 *   insn=0x00000000003CAA54 string=0x00000000003CAA58 "@"
 *   insn=0x00000000003CAA58 string=0x00000000003CAA5C ""
 *   insn=0x00000000003CAA5C string=0x00000000003CAA60 ""
 *   insn=0x00000000003CAA64 string=0x00000000003CAA68 ""
 *   insn=0x00000000003CAA68 string=0x00000000003CAA6C ""
 *   insn=0x00000000003CAA80 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000003CAA9C string=0x00000000003CAAA0 "("
 *   insn=0x00000000003CAAA0 string=0x00000000003CAAA4 "\t\t@"
 *   insn=0x00000000003CAAA4 string=0x00000000003CAAA8 ")"
 *   insn=0x00000000003CAAA8 string=0x00000000003CAAAC "\t\t"
 *   insn=0x00000000003CAAB0 string=0x00000000003CAAB4 "\t"
 *   insn=0x00000000003CAAB4 string=0x00000000003CAAB8 ")"
 *   insn=0x00000000003CAABC string=0x00000000003CAAC0 " "
 *   insn=0x00000000003CAACC string=0x00000000003CAAD0 "}"
 *   insn=0x00000000003CAAEC string=0x00000000003CAAF0 "uD"
 *   insn=0x00000000003CAAF0 string=0x00000000003CAAF4 "`"
 *   insn=0x00000000003CAAFC string=0x00000000003CAB00 "A"
 *   insn=0x00000000003CAB00 string=0x00000000003CAB04 "h"
 *   insn=0x00000000003CAB04 string=0x00000000003CAB08 "N"
 *   insn=0x00000000003CAB08 string=0x00000000003CAB0C ""
 *   insn=0x00000000003CAB08 string=0x00000000001FBC40 "0'"
 *   insn=0x00000000003CAB0C string=0x00000000003CAB10 "\t"
 *   insn=0x00000000003CAB10 string=0x00000000003CAB14 "\n"
 *   insn=0x00000000003CAB14 string=0x00000000003CAB18 "hJ"
 *   insn=0x00000000003CAB18 string=0x00000000003CAB1C "iV"
 *   insn=0x00000000003CAB1C string=0x00000000003CAB20 "j"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall boost::scoped_ptr<Caver::GUIRoundedRect>::~scoped_ptr(_QWORD **a1)
{
  _QWORD *v1; // x19
  void *v2; // x0
  void *v3; // x0
  _DWORD *v4; // x0
  int v5; // w8
  _DWORD *v6; // x0
  int v7; // w8

  v1 = *a1;
  if ( *a1 )
  {
    v2 = (void *)v1[17];
    if ( v2 )
      operator delete[](v2);
    v3 = (void *)v1[14];
    if ( v3 )
      operator delete[](v3);
    v4 = (_DWORD *)v1[10];
    if ( v4 )
    {
      v5 = v4[2] - 1;
      v4[2] = v5;
      if ( !v5 )
        (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v4 + 8LL))(v4);
    }
    v6 = (_DWORD *)*v1;
    if ( *v1 )
    {
      v7 = v6[2] - 1;
      v6[2] = v7;
      if ( !v7 )
        (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v6 + 8LL))(v6);
    }
    operator delete(v1);
  }
}

