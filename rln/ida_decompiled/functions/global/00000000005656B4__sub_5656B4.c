/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000005656B4
 * Mangled: sub_5656B4
 * Demangled: sub_5656B4
 *
 * Callers: 52
 *   0x0000000000464844  Caver::Scene::MakeUniqueObjectIdentifier(std::string const&)
 *   0x00000000004B3318  Caver::PathForResourceOfType(std::string const&,std::string const&)
 *   0x00000000004B3EFC  Caver::PathExtension(std::string const&)
 *   0x00000000004B48B4  Caver::GetFilesWithExtension(std::string const&,std::string const&,std::vector<std::string,std::allocator<std::string>> *)
 *   0x00000000004B504C  Caver::LastPathComponent(std::string const&)
 *   0x00000000004B9DBC  Caver::GUITextFieldImpl::TextInputTextDidChange(std::string const&)
 *   0x000000000052FF60  sub_52FF60
 *   0x0000000000530504  sub_530504
 *   0x000000000055201C  sub_55201C
 *   0x0000000000552738  sub_552738
 *   0x00000000005665AC  sub_5665AC
 *   0x0000000000566784  sub_566784
 *   0x0000000000566900  sub_566900
 *   0x00000000005674C0  sub_5674C0
 *   0x00000000005676D8  sub_5676D8
 *   0x0000000000567B48  sub_567B48
 *   0x00000000005687B0  sub_5687B0
 *   0x000000000056887C  sub_56887C
 *   0x0000000000568918  sub_568918
 *   0x0000000000568A5C  sub_568A5C
 *   0x0000000000568B10  sub_568B10
 *   0x0000000000568F74  sub_568F74
 *   0x00000000005692D8  sub_5692D8
 *   0x0000000000569390  sub_569390
 *   0x0000000000569578  sub_569578
 *   0x000000000056960C  sub_56960C
 *   0x000000000056998C  sub_56998C
 *   0x0000000000569B54  sub_569B54
 *   0x0000000000569CB8  sub_569CB8
 *   0x0000000000569E1C  sub_569E1C
 *   0x000000000056A110  sub_56A110
 *   0x000000000056B23C  sub_56B23C
 *   0x000000000056B58C  sub_56B58C
 *   0x000000000056B608  sub_56B608
 *   0x000000000056C208  sub_56C208
 *   0x000000000056C2A4  sub_56C2A4
 *   0x000000000056C3EC  sub_56C3EC
 *   0x000000000056C4A8  sub_56C4A8
 *   0x000000000056C918  sub_56C918
 *   0x000000000056CC78  sub_56CC78
 *   0x000000000056CD30  sub_56CD30
 *   0x000000000056CF2C  sub_56CF2C
 *   0x000000000056CFC0  sub_56CFC0
 *   0x000000000056D2D4  sub_56D2D4
 *   0x000000000056D490  sub_56D490
 *   0x000000000056D5F4  sub_56D5F4
 *   0x000000000056D7F4  sub_56D7F4
 *   0x000000000056D918  sub_56D918
 *   0x000000000056DA58  sub_56DA58
 *   0x000000000056DD68  sub_56DD68
 *   0x000000000056E0DC  sub_56E0DC
 *   0x000000000056E538  sub_56E538
 *
 * Callees: 10
 *   0x00000000001F41F0  .__cxa_free_exception
 *   0x00000000001F9460  .__cxa_allocate_exception
 *   0x00000000001FB4A0  .__cxa_throw
 *   0x0000000000203230  .strlen
 *   0x000000000054A3F8  sub_54A3F8
 *   0x000000000054AADC  sub_54AADC
 *   0x0000000000565220  sub_565220
 *   0x00000000005663A0  sub_5663A0
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 13
 *   insn=0x0000000000565704 string=0x0000000000565708 "'"
 *   insn=0x0000000000565718 string=0x000000000056571C "B"
 *   insn=0x0000000000565724 string=0x0000000000565728 "?`""
 *   insn=0x0000000000565768 string=0x000000000056576C "=O"
 *   insn=0x000000000056576C string=0x00000000001F9460 "0'"
 *   insn=0x0000000000565798 string=0x000000000056579C "!"
 *   insn=0x00000000005657B0 string=0x00000000005657B4 "!"
 *   insn=0x00000000005657B4 string=0x00000000005657B8 "B"
 *   insn=0x00000000005657B8 string=0x00000000005657BC "9W"
 *   insn=0x00000000005657BC string=0x00000000001FB4A0 "0'"
 *   insn=0x00000000005657D4 string=0x00000000001F41F0 "P'"
 *   insn=0x00000000005657D8 string=0x00000000005657DC ":p"
 *   insn=0x00000000005657E8 string=0x00000000005657EC "!"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __noreturn sub_5656B4(const char *a1, ...)
{
  size_t v2; // x0
  _QWORD *exception; // x19
  __int64 v4; // [xsp+0h] [xbp+0h] BYREF
  gcc_va_list va; // [xsp+30h] [xbp+30h] BYREF
  __int64 v6; // [xsp+68h] [xbp+68h] BYREF
  gcc_va_list va1; // [xsp+70h] [xbp+70h] BYREF

  va_start(va, a1);
  va_start(va1, a1);
  v2 = strlen(a1);
  sub_5663A0(&v4, v2 + 512, a1, va);
  exception = __cxa_allocate_exception(0x10u);
  sub_566BB8((int)&v6, (char *)&v4);
  sub_54AADC(exception, (__int64)&v6);
  if ( (__int64 *)(v6 - 24) != &qword_6FD2E0 )
    sub_565220((unsigned int *)(v6 - 24));
  __cxa_throw(exception, (struct type_info *)&`typeinfo for'std::out_of_range, (void (*)(void *))sub_54A3F8);
}

