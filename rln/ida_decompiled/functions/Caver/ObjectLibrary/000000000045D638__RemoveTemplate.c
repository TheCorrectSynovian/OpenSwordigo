/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000045D638
 * Mangled: _ZN5Caver13ObjectLibrary14RemoveTemplateEPNS_14ObjectTemplateE
 * Demangled: Caver::ObjectLibrary::RemoveTemplate(Caver::ObjectTemplate *)
 *
 * Callers: 1
 *   0x000000000045CFD4  Caver::ObjectLibrary::Process(Caver::SceneProcessingContext *)
 *
 * Callees: 2
 *   0x00000000001FABD0  std::_Rb_tree<std::string,std::pair<std::string const,Caver::ObjectLibrary::ObjectTemplateInfo>,std::_Select1st<std::pair<std::string const,Caver::ObjectLibrary::ObjectTemplateInfo>>,std::less<std::string>,std::allocator<std::pair<std::string const,Caver::ObjectLibrary::ObjectTemplateInfo>>>::_M_erase_aux(std::_Rb_tree_const_iterator<std::pair<std::string const,Caver::ObjectLibrary::ObjectTemplateInfo>>,std::_Rb_tree_const_iterator<std::pair<std::string const,Caver::ObjectLibrary::ObjectTemplateInfo>>)
 *   0x0000000000201150  std::_Rb_tree<std::string,std::pair<std::string const,Caver::ObjectLibrary::ObjectTemplateInfo>,std::_Select1st<std::pair<std::string const,Caver::ObjectLibrary::ObjectTemplateInfo>>,std::less<std::string>,std::allocator<std::pair<std::string const,Caver::ObjectLibrary::ObjectTemplateInfo>>>::equal_range(std::string const&)
 *
 * Referenced strings: 5
 *   insn=0x000000000045D63C string=0x000000000045D640 "A"
 *   insn=0x000000000045D640 string=0x000000000045D644 "?"
 *   insn=0x000000000045D654 string=0x000000000045D658 "!@"
 *   insn=0x000000000045D67C string=0x000000000045D680 "Tu"
 *   insn=0x000000000045D680 string=0x00000000001FABD0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ObjectLibrary::RemoveTemplate(Caver::ObjectLibrary *this, Caver::ObjectTemplate *a2)
{
  if ( *((Caver::ObjectLibrary **)a2 + 37) == this )
    *((_QWORD *)a2 + 37) = 0;
  std::_Rb_tree<std::string,std::pair<std::string const,Caver::ObjectLibrary::ObjectTemplateInfo>,std::_Select1st<std::pair<std::string const,Caver::ObjectLibrary::ObjectTemplateInfo>>,std::less<std::string>,std::allocator<std::pair<std::string const,Caver::ObjectLibrary::ObjectTemplateInfo>>>::equal_range();
  return std::_Rb_tree<std::string,std::pair<std::string const,Caver::ObjectLibrary::ObjectTemplateInfo>,std::_Select1st<std::pair<std::string const,Caver::ObjectLibrary::ObjectTemplateInfo>>,std::less<std::string>,std::allocator<std::pair<std::string const,Caver::ObjectLibrary::ObjectTemplateInfo>>>::_M_erase_aux();
}

