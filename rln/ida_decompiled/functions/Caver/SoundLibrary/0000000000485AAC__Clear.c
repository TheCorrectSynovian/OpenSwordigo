/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000485AAC
 * Mangled: _ZN5Caver12SoundLibrary5ClearEv
 * Demangled: Caver::SoundLibrary::Clear(void)
 *
 * Callers: 2
 *   0x00000000001FE540  Caver::SoundLibrary::Clear(void)
 *   0x00000000004859C8  Caver::SoundLibrary::SaveToProtobufMessage(Caver::Proto::SoundLibrary *)
 *
 * Callees: 2
 *   0x00000000001F7940  std::_Rb_tree<std::string,std::pair<std::string const,boost::intrusive_ptr<Caver::SoundEffect>>,std::_Select1st<std::pair<std::string const,boost::intrusive_ptr<Caver::SoundEffect>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::intrusive_ptr<Caver::SoundEffect>>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,boost::intrusive_ptr<Caver::SoundEffect>>> *)
 *   0x00000000001FE070  std::_Rb_tree<std::string,std::pair<std::string const,boost::weak_ptr<Caver::AudioBuffer>>,std::_Select1st<std::pair<std::string const,boost::weak_ptr<Caver::AudioBuffer>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::weak_ptr<Caver::AudioBuffer>>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,boost::weak_ptr<Caver::AudioBuffer>>> *)
 *
 * Referenced strings: 9
 *   insn=0x0000000000485AB8 string=0x0000000000485ABC "a\n@"
 *   insn=0x0000000000485ABC string=0x0000000000485AC0 "t""
 *   insn=0x0000000000485AC4 string=0x0000000000485AC8 "a"@"
 *   insn=0x0000000000485AC4 string=0x00000000001F7940 "0'"
 *   insn=0x0000000000485AC8 string=0x0000000000485ACC "`"
 *   insn=0x0000000000485AD0 string=0x0000000000485AD4 "t~"
 *   insn=0x0000000000485AD4 string=0x0000000000485AD8 "t"
 *   insn=0x0000000000485AD8 string=0x0000000000485ADC "e"
 *   insn=0x0000000000485AE0 string=0x0000000000485AE4 "t~"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::SoundLibrary::Clear(Caver::SoundLibrary *this)
{
  char *v2; // x20
  __int64 result; // x0

  v2 = (char *)this + 8;
  std::_Rb_tree<std::string,std::pair<std::string const,boost::intrusive_ptr<Caver::SoundEffect>>,std::_Select1st<std::pair<std::string const,boost::intrusive_ptr<Caver::SoundEffect>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::intrusive_ptr<Caver::SoundEffect>>>>::_M_erase();
  *((_QWORD *)this + 2) = 0;
  *((_QWORD *)this + 3) = v2;
  *((_QWORD *)this + 4) = v2;
  *((_QWORD *)this + 5) = 0;
  result = std::_Rb_tree<std::string,std::pair<std::string const,boost::weak_ptr<Caver::AudioBuffer>>,std::_Select1st<std::pair<std::string const,boost::weak_ptr<Caver::AudioBuffer>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::weak_ptr<Caver::AudioBuffer>>>>::_M_erase();
  *((_QWORD *)this + 8) = 0;
  *((_QWORD *)this + 9) = (char *)this + 56;
  *((_QWORD *)this + 10) = (char *)this + 56;
  *((_QWORD *)this + 11) = 0;
  return result;
}

