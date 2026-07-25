/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000483750
 * Mangled: _ZNSt10_List_baseIN5boost13intrusive_ptrIN5Caver17SoundEffectSourceEEESaIS4_EED2Ev
 * Demangled: std::_List_base<boost::intrusive_ptr<Caver::SoundEffectSource>,std::allocator<boost::intrusive_ptr<Caver::SoundEffectSource>>>::~_List_base()
 *
 * Callers: 2
 *   0x000000000020C32C  sub_20C32C
 *   0x00000000004834EC  Caver::MusicPlaylist::SaveToProtobufMessage(Caver::Proto::MusicPlaylist *)
 *
 * Callees: 1
 *   0x00000000001F72B0  operator delete(void *)
 *
 * Referenced strings: 8
 *   insn=0x0000000000483760 string=0x0000000000483764 "t"
 *   insn=0x0000000000483778 string=0x000000000048377C "@"
 *   insn=0x000000000048377C string=0x0000000000483780 ""
 *   insn=0x0000000000483780 string=0x0000000000483784 ""
 *   insn=0x0000000000483788 string=0x000000000048378C ""
 *   insn=0x000000000048378C string=0x0000000000483790 ""
 *   insn=0x000000000048379C string=0x00000000001F72B0 "0'"
 *   insn=0x00000000004837A4 string=0x00000000004837A8 "A"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall std::_List_base<boost::intrusive_ptr<Caver::SoundEffectSource>>::~_List_base(_QWORD **a1)
{
  _QWORD *v2; // x20
  _DWORD *v3; // x0
  _QWORD *v4; // x21
  int v5; // w8

  v2 = *a1;
  if ( *a1 != a1 )
  {
    do
    {
      v3 = (_DWORD *)v2[2];
      v4 = (_QWORD *)*v2;
      if ( v3 )
      {
        v5 = v3[2] - 1;
        v3[2] = v5;
        if ( !v5 )
          (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v3 + 8LL))(v3);
      }
      operator delete(v2);
      v2 = v4;
    }
    while ( v4 != a1 );
  }
}

