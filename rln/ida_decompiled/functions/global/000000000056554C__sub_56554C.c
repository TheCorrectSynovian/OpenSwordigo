/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000056554C
 * Mangled: sub_56554C
 * Demangled: sub_56554C
 *
 * Callers: 53
 *   0x00000000003DCAC0  std::vector<boost::shared_ptr<Caver::GUIAnimation>,std::allocator<boost::shared_ptr<Caver::GUIAnimation>>>::_M_fill_insert(__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::GUIAnimation>*,std::vector<boost::shared_ptr<Caver::GUIAnimation>,std::allocator<boost::shared_ptr<Caver::GUIAnimation>>>>,ulong,boost::shared_ptr<Caver::GUIAnimation> const&)
 *   0x00000000003F5500  std::vector<boost::shared_ptr<Caver::StoreProduct>,std::allocator<boost::shared_ptr<Caver::StoreProduct>>>::_M_fill_insert(__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::StoreProduct>*,std::vector<boost::shared_ptr<Caver::StoreProduct>,std::allocator<boost::shared_ptr<Caver::StoreProduct>>>>,ulong,boost::shared_ptr<Caver::StoreProduct> const&)
 *   0x00000000004477DC  std::vector<Caver::MeshBuilder::Vertex,std::allocator<Caver::MeshBuilder::Vertex>>::_M_fill_insert(__gnu_cxx::__normal_iterator<Caver::MeshBuilder::Vertex*,std::vector<Caver::MeshBuilder::Vertex,std::allocator<Caver::MeshBuilder::Vertex>>>,ulong,Caver::MeshBuilder::Vertex const&)
 *   0x0000000000447CA4  std::vector<int,std::allocator<int>>::_M_fill_insert(__gnu_cxx::__normal_iterator<int *,std::vector<int,std::allocator<int>>>,ulong,int const&)
 *   0x0000000000489FE0  std::string::_M_replace_dispatch<std::istreambuf_iterator<char,std::char_traits<char>>>(__gnu_cxx::__normal_iterator<char *,std::string>,__gnu_cxx::__normal_iterator<char *,std::string>,std::istreambuf_iterator<char,std::char_traits<char>>,std::istreambuf_iterator<char,std::char_traits<char>>,std::__false_type)
 *   0x00000000004B08D8  std::vector<Caver::Vector2,std::allocator<Caver::Vector2>>::_M_fill_insert(__gnu_cxx::__normal_iterator<Caver::Vector2*,std::vector<Caver::Vector2,std::allocator<Caver::Vector2>>>,ulong,Caver::Vector2 const&)
 *   0x00000000004C6BCC  std::vector<Caver::FontText::CharacterInfo,std::allocator<Caver::FontText::CharacterInfo>>::_M_range_insert<__gnu_cxx::__normal_iterator<Caver::FontText::CharacterInfo*,std::vector<Caver::FontText::CharacterInfo,std::allocator<Caver::FontText::CharacterInfo>>>>(__gnu_cxx::__normal_iterator<Caver::FontText::CharacterInfo*,std::vector<Caver::FontText::CharacterInfo,std::allocator<Caver::FontText::CharacterInfo>>>,__gnu_cxx::__normal_iterator<Caver::FontText::CharacterInfo*,std::vector<Caver::FontText::CharacterInfo,std::allocator<Caver::FontText::CharacterInfo>>>,__gnu_cxx::__normal_iterator<Caver::FontText::CharacterInfo*,std::vector<Caver::FontText::CharacterInfo,std::allocator<Caver::FontText::CharacterInfo>>>,std::forward_iterator_tag)
 *   0x00000000005665E4  sub_5665E4
 *   0x0000000000566784  sub_566784
 *   0x0000000000566900  sub_566900
 *   0x0000000000566A7C  sub_566A7C
 *   0x0000000000566BB8  sub_566BB8
 *   0x0000000000566CF8  sub_566CF8
 *   0x0000000000566E14  sub_566E14
 *   0x0000000000567088  sub_567088
 *   0x0000000000567254  sub_567254
 *   0x000000000056739C  sub_56739C
 *   0x0000000000567958  sub_567958
 *   0x0000000000567A50  sub_567A50
 *   0x0000000000568C20  sub_568C20
 *   0x0000000000569074  sub_569074
 *   0x000000000056918C  sub_56918C
 *   0x0000000000569390  sub_569390
 *   0x0000000000569650  sub_569650
 *   0x0000000000569A48  sub_569A48
 *   0x0000000000569AC0  sub_569AC0
 *   0x0000000000569B54  sub_569B54
 *   0x0000000000569C14  sub_569C14
 *   0x0000000000569CB8  sub_569CB8
 *   0x0000000000569D84  sub_569D84
 *   0x0000000000569E1C  sub_569E1C
 *   0x000000000056A3F4  sub_56A3F4
 *   0x000000000056A798  sub_56A798
 *   0x000000000056AA20  sub_56AA20
 *   0x000000000056AB54  sub_56AB54
 *   0x000000000056AC74  sub_56AC74
 *   0x000000000056AD8C  sub_56AD8C
 *   0x000000000056AEBC  sub_56AEBC
 *   0x000000000056B274  sub_56B274
 *   0x000000000056C5B8  sub_56C5B8
 *   0x000000000056CA1C  sub_56CA1C
 *   0x000000000056CB34  sub_56CB34
 *   0x000000000056CD30  sub_56CD30
 *   0x000000000056D390  sub_56D390
 *   0x000000000056D400  sub_56D400
 *   0x000000000056D490  sub_56D490
 *   0x000000000056D54C  sub_56D54C
 *   0x000000000056D5F4  sub_56D5F4
 *   0x000000000056D6C0  sub_56D6C0
 *   0x000000000056DA58  sub_56DA58
 *   0x000000000056E634  sub_56E634
 *   0x000000000056E86C  sub_56E86C
 *   0x000000000056E994  sub_56E994
 *
 * Callees: 8
 *   0x00000000001F41F0  .__cxa_free_exception
 *   0x00000000001F9460  .__cxa_allocate_exception
 *   0x00000000001FB4A0  .__cxa_throw
 *   0x000000000054A36C  sub_54A36C
 *   0x000000000054AA90  sub_54AA90
 *   0x0000000000565220  sub_565220
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 10
 *   insn=0x0000000000565564 string=0x00000000001F9460 "0'"
 *   insn=0x0000000000565580 string=0x0000000000565584 "C"
 *   insn=0x0000000000565590 string=0x0000000000565594 "!"
 *   insn=0x00000000005655A8 string=0x00000000005655AC "!"
 *   insn=0x00000000005655AC string=0x00000000005655B0 "B"
 *   insn=0x00000000005655B4 string=0x00000000001FB4A0 "0'"
 *   insn=0x00000000005655C8 string=0x00000000005655CC "\t;"
 *   insn=0x00000000005655CC string=0x00000000001F41F0 "P'"
 *   insn=0x00000000005655E0 string=0x00000000005655E4 "!"
 *   insn=0x00000000005655F4 string=0x00000000005655F8 "\n"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall __noreturn sub_56554C(char *a1)
{
  _QWORD *exception; // x19
  __int64 v3; // [xsp+48h] [xbp+48h] BYREF

  exception = __cxa_allocate_exception(0x10u);
  sub_566BB8((int)&v3, a1);
  sub_54AA90(exception, (__int64)&v3);
  if ( (__int64 *)(v3 - 24) != &qword_6FD2E0 )
    sub_565220((unsigned int *)(v3 - 24));
  __cxa_throw(exception, (struct type_info *)&`typeinfo for'std::length_error, (void (*)(void *))sub_54A36C);
}

