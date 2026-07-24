/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005b71d8
 * Function: boost::detail::sp_counted_impl_p<boost::random::mersenne_twister<unsigned_int,32,624,397,31,2567483615u,11,7,2636928640u,15,4022730752u,18,3346425566u>>::~sp_counted_impl_p
 * Signature: undefined __thiscall ~sp_counted_impl_p(sp_counted_impl_p<boost::random::mersenne_twister<unsigned_int,32,624,397,31,2567483615u,11,7,2636928640u,15,4022730752u,18,3346425566u>> * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::detail::sp_counted_impl_p<boost::random::mersenne_twister<unsigned int, 32, 624, 397, 31,
   2567483615u, 11, 7, 2636928640u, 15, 4022730752u, 18, 3346425566u> >::~sp_counted_impl_p() */

void __thiscall
boost::detail::
sp_counted_impl_p<boost::random::mersenne_twister<unsigned_int,32,624,397,31,2567483615u,11,7,2636928640u,15,4022730752u,18,3346425566u>>
::~sp_counted_impl_p
          (sp_counted_impl_p<boost::random::mersenne_twister<unsigned_int,32,624,397,31,2567483615u,11,7,2636928640u,15,4022730752u,18,3346425566u>>
           *this)

{
  (*(code *)PTR_operator_delete_007de188)();
  return;
}


