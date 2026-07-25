/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004CD580
 * Mangled: _ZN5Caver14TextureLibrary5ClearEv
 * Demangled: Caver::TextureLibrary::Clear(void)
 *
 * Callers: 1
 *   0x00000000001FEA60  Caver::TextureLibrary::Clear(void)
 *
 * Callees: 1
 *   0x00000000001F3530  std::_Rb_tree<std::string,std::pair<std::string const,boost::intrusive_ptr<Caver::Texture>>,std::_Select1st<std::pair<std::string const,boost::intrusive_ptr<Caver::Texture>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::intrusive_ptr<Caver::Texture>>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,boost::intrusive_ptr<Caver::Texture>>> *)
 *
 * Referenced strings: 12
 *   insn=0x00000000004CD590 string=0x00000000004CD594 "a"
 *   insn=0x00000000004CD594 string=0x00000000004CD598 "`""
 *   insn=0x00000000004CD598 string=0x00000000004CD59C "vB"
 *   insn=0x00000000004CD5A0 string=0x00000000004CD5A4 "t"
 *   insn=0x00000000004CD5A0 string=0x00000000001F3530 "P'"
 *   insn=0x00000000004CD5A8 string=0x00000000004CD5AC "v"
 *   insn=0x00000000004CD5B4 string=0x00000000004CD5EC "t*"
 *   insn=0x00000000004CD5C0 string=0x00000000004CD5C4 "@"
 *   insn=0x00000000004CD5C4 string=0x00000000004CD5C8 ""
 *   insn=0x00000000004CD5C8 string=0x00000000004CD5CC ""
 *   insn=0x00000000004CD5D0 string=0x00000000004CD5D4 ""
 *   insn=0x00000000004CD5D4 string=0x00000000004CD5D8 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_DWORD *__fastcall Caver::TextureLibrary::Clear(Caver::TextureLibrary *this)
{
  char *v2; // x22
  _DWORD *result; // x0
  _DWORD **v4; // x20
  _DWORD **v5; // x21
  _DWORD **v6; // x22
  int v7; // w8

  v2 = (char *)this + 16;
  result = (_DWORD *)std::_Rb_tree<std::string,std::pair<std::string const,boost::intrusive_ptr<Caver::Texture>>,std::_Select1st<std::pair<std::string const,boost::intrusive_ptr<Caver::Texture>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::intrusive_ptr<Caver::Texture>>>>::_M_erase();
  v4 = (_DWORD **)*((_QWORD *)this + 9);
  v5 = (_DWORD **)*((_QWORD *)this + 10);
  *((_QWORD *)this + 3) = 0;
  *((_QWORD *)this + 4) = v2;
  *((_QWORD *)this + 5) = v2;
  *((_QWORD *)this + 6) = 0;
  if ( v5 != v4 )
  {
    v6 = v4;
    do
    {
      result = *v6;
      if ( *v6 )
      {
        v7 = result[2] - 1;
        result[2] = v7;
        if ( !v7 )
          result = (_DWORD *)(*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)result + 8LL))(result);
      }
      ++v6;
    }
    while ( v5 != v6 );
  }
  *((_QWORD *)this + 10) = v4;
  *((_DWORD *)this + 15) = 0;
  *((_BYTE *)this + 56) = 0;
  return result;
}

