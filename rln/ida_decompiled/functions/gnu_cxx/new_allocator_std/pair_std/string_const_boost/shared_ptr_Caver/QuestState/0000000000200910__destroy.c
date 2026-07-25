/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000200910
 * Mangled: ._ZN9__gnu_cxx13new_allocatorISt4pairIKSsN5boost10shared_ptrIN5Caver10QuestStateEEEEE7destroyEPS8_
 * Demangled: __gnu_cxx::new_allocator<std::pair<std::string const,boost::shared_ptr<Caver::QuestState>>>::destroy(std::pair<std::string const,boost::shared_ptr<Caver::QuestState>>*)
 *
 * Callers: 1
 *   0x00000000003B9078  Caver::GameState::CurrentGuideTarget(void)
 *
 * Callees: 1
 *   0x00000000003B9240  __gnu_cxx::new_allocator<std::pair<std::string const,boost::shared_ptr<Caver::QuestState>>>::destroy(std::pair<std::string const,boost::shared_ptr<Caver::QuestState>>*)
 *
 * Referenced strings: 1
 *   insn=0x0000000000200918 string=0x000000000020091C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __gnu_cxx::new_allocator<std::pair<std::string const,boost::shared_ptr<Caver::QuestState>>>::destroy()
{
  return _ZN9__gnu_cxx13new_allocatorISt4pairIKSsN5boost10shared_ptrIN5Caver10QuestStateEEEEE7destroyEPS8_();
}

