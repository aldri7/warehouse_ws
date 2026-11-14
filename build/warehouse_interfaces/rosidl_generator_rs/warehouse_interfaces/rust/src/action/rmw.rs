
#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "warehouse_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__warehouse_interfaces__action__Deliver_Goal() -> *const std::ffi::c_void;
}

#[link(name = "warehouse_interfaces__rosidl_generator_c")]
extern "C" {
    fn warehouse_interfaces__action__Deliver_Goal__init(msg: *mut Deliver_Goal) -> bool;
    fn warehouse_interfaces__action__Deliver_Goal__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Deliver_Goal>, size: usize) -> bool;
    fn warehouse_interfaces__action__Deliver_Goal__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Deliver_Goal>);
    fn warehouse_interfaces__action__Deliver_Goal__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Deliver_Goal>, out_seq: *mut rosidl_runtime_rs::Sequence<Deliver_Goal>) -> bool;
}

// Corresponds to warehouse_interfaces__action__Deliver_Goal
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Deliver_Goal {

    // This member is not documented.
    #[allow(missing_docs)]
    pub destination: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub distance: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub speed: f32,

}



impl Default for Deliver_Goal {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !warehouse_interfaces__action__Deliver_Goal__init(&mut msg as *mut _) {
        panic!("Call to warehouse_interfaces__action__Deliver_Goal__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Deliver_Goal {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { warehouse_interfaces__action__Deliver_Goal__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { warehouse_interfaces__action__Deliver_Goal__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { warehouse_interfaces__action__Deliver_Goal__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Deliver_Goal {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Deliver_Goal where Self: Sized {
  const TYPE_NAME: &'static str = "warehouse_interfaces/action/Deliver_Goal";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__warehouse_interfaces__action__Deliver_Goal() }
  }
}


#[link(name = "warehouse_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__warehouse_interfaces__action__Deliver_Result() -> *const std::ffi::c_void;
}

#[link(name = "warehouse_interfaces__rosidl_generator_c")]
extern "C" {
    fn warehouse_interfaces__action__Deliver_Result__init(msg: *mut Deliver_Result) -> bool;
    fn warehouse_interfaces__action__Deliver_Result__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Deliver_Result>, size: usize) -> bool;
    fn warehouse_interfaces__action__Deliver_Result__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Deliver_Result>);
    fn warehouse_interfaces__action__Deliver_Result__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Deliver_Result>, out_seq: *mut rosidl_runtime_rs::Sequence<Deliver_Result>) -> bool;
}

// Corresponds to warehouse_interfaces__action__Deliver_Result
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Deliver_Result {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub time_taken: f32,

}



impl Default for Deliver_Result {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !warehouse_interfaces__action__Deliver_Result__init(&mut msg as *mut _) {
        panic!("Call to warehouse_interfaces__action__Deliver_Result__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Deliver_Result {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { warehouse_interfaces__action__Deliver_Result__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { warehouse_interfaces__action__Deliver_Result__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { warehouse_interfaces__action__Deliver_Result__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Deliver_Result {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Deliver_Result where Self: Sized {
  const TYPE_NAME: &'static str = "warehouse_interfaces/action/Deliver_Result";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__warehouse_interfaces__action__Deliver_Result() }
  }
}


#[link(name = "warehouse_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__warehouse_interfaces__action__Deliver_Feedback() -> *const std::ffi::c_void;
}

#[link(name = "warehouse_interfaces__rosidl_generator_c")]
extern "C" {
    fn warehouse_interfaces__action__Deliver_Feedback__init(msg: *mut Deliver_Feedback) -> bool;
    fn warehouse_interfaces__action__Deliver_Feedback__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Deliver_Feedback>, size: usize) -> bool;
    fn warehouse_interfaces__action__Deliver_Feedback__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Deliver_Feedback>);
    fn warehouse_interfaces__action__Deliver_Feedback__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Deliver_Feedback>, out_seq: *mut rosidl_runtime_rs::Sequence<Deliver_Feedback>) -> bool;
}

// Corresponds to warehouse_interfaces__action__Deliver_Feedback
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Deliver_Feedback {

    // This member is not documented.
    #[allow(missing_docs)]
    pub remaining_distance: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub percent: f32,

}



impl Default for Deliver_Feedback {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !warehouse_interfaces__action__Deliver_Feedback__init(&mut msg as *mut _) {
        panic!("Call to warehouse_interfaces__action__Deliver_Feedback__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Deliver_Feedback {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { warehouse_interfaces__action__Deliver_Feedback__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { warehouse_interfaces__action__Deliver_Feedback__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { warehouse_interfaces__action__Deliver_Feedback__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Deliver_Feedback {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Deliver_Feedback where Self: Sized {
  const TYPE_NAME: &'static str = "warehouse_interfaces/action/Deliver_Feedback";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__warehouse_interfaces__action__Deliver_Feedback() }
  }
}


#[link(name = "warehouse_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__warehouse_interfaces__action__Deliver_FeedbackMessage() -> *const std::ffi::c_void;
}

#[link(name = "warehouse_interfaces__rosidl_generator_c")]
extern "C" {
    fn warehouse_interfaces__action__Deliver_FeedbackMessage__init(msg: *mut Deliver_FeedbackMessage) -> bool;
    fn warehouse_interfaces__action__Deliver_FeedbackMessage__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Deliver_FeedbackMessage>, size: usize) -> bool;
    fn warehouse_interfaces__action__Deliver_FeedbackMessage__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Deliver_FeedbackMessage>);
    fn warehouse_interfaces__action__Deliver_FeedbackMessage__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Deliver_FeedbackMessage>, out_seq: *mut rosidl_runtime_rs::Sequence<Deliver_FeedbackMessage>) -> bool;
}

// Corresponds to warehouse_interfaces__action__Deliver_FeedbackMessage
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Deliver_FeedbackMessage {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub feedback: super::super::action::rmw::Deliver_Feedback,

}



impl Default for Deliver_FeedbackMessage {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !warehouse_interfaces__action__Deliver_FeedbackMessage__init(&mut msg as *mut _) {
        panic!("Call to warehouse_interfaces__action__Deliver_FeedbackMessage__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Deliver_FeedbackMessage {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { warehouse_interfaces__action__Deliver_FeedbackMessage__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { warehouse_interfaces__action__Deliver_FeedbackMessage__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { warehouse_interfaces__action__Deliver_FeedbackMessage__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Deliver_FeedbackMessage {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Deliver_FeedbackMessage where Self: Sized {
  const TYPE_NAME: &'static str = "warehouse_interfaces/action/Deliver_FeedbackMessage";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__warehouse_interfaces__action__Deliver_FeedbackMessage() }
  }
}




#[link(name = "warehouse_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__warehouse_interfaces__action__Deliver_SendGoal_Request() -> *const std::ffi::c_void;
}

#[link(name = "warehouse_interfaces__rosidl_generator_c")]
extern "C" {
    fn warehouse_interfaces__action__Deliver_SendGoal_Request__init(msg: *mut Deliver_SendGoal_Request) -> bool;
    fn warehouse_interfaces__action__Deliver_SendGoal_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Deliver_SendGoal_Request>, size: usize) -> bool;
    fn warehouse_interfaces__action__Deliver_SendGoal_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Deliver_SendGoal_Request>);
    fn warehouse_interfaces__action__Deliver_SendGoal_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Deliver_SendGoal_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<Deliver_SendGoal_Request>) -> bool;
}

// Corresponds to warehouse_interfaces__action__Deliver_SendGoal_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Deliver_SendGoal_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal: super::super::action::rmw::Deliver_Goal,

}



impl Default for Deliver_SendGoal_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !warehouse_interfaces__action__Deliver_SendGoal_Request__init(&mut msg as *mut _) {
        panic!("Call to warehouse_interfaces__action__Deliver_SendGoal_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Deliver_SendGoal_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { warehouse_interfaces__action__Deliver_SendGoal_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { warehouse_interfaces__action__Deliver_SendGoal_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { warehouse_interfaces__action__Deliver_SendGoal_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Deliver_SendGoal_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Deliver_SendGoal_Request where Self: Sized {
  const TYPE_NAME: &'static str = "warehouse_interfaces/action/Deliver_SendGoal_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__warehouse_interfaces__action__Deliver_SendGoal_Request() }
  }
}


#[link(name = "warehouse_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__warehouse_interfaces__action__Deliver_SendGoal_Response() -> *const std::ffi::c_void;
}

#[link(name = "warehouse_interfaces__rosidl_generator_c")]
extern "C" {
    fn warehouse_interfaces__action__Deliver_SendGoal_Response__init(msg: *mut Deliver_SendGoal_Response) -> bool;
    fn warehouse_interfaces__action__Deliver_SendGoal_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Deliver_SendGoal_Response>, size: usize) -> bool;
    fn warehouse_interfaces__action__Deliver_SendGoal_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Deliver_SendGoal_Response>);
    fn warehouse_interfaces__action__Deliver_SendGoal_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Deliver_SendGoal_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<Deliver_SendGoal_Response>) -> bool;
}

// Corresponds to warehouse_interfaces__action__Deliver_SendGoal_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Deliver_SendGoal_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub accepted: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::rmw::Time,

}



impl Default for Deliver_SendGoal_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !warehouse_interfaces__action__Deliver_SendGoal_Response__init(&mut msg as *mut _) {
        panic!("Call to warehouse_interfaces__action__Deliver_SendGoal_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Deliver_SendGoal_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { warehouse_interfaces__action__Deliver_SendGoal_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { warehouse_interfaces__action__Deliver_SendGoal_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { warehouse_interfaces__action__Deliver_SendGoal_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Deliver_SendGoal_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Deliver_SendGoal_Response where Self: Sized {
  const TYPE_NAME: &'static str = "warehouse_interfaces/action/Deliver_SendGoal_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__warehouse_interfaces__action__Deliver_SendGoal_Response() }
  }
}


#[link(name = "warehouse_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__warehouse_interfaces__action__Deliver_GetResult_Request() -> *const std::ffi::c_void;
}

#[link(name = "warehouse_interfaces__rosidl_generator_c")]
extern "C" {
    fn warehouse_interfaces__action__Deliver_GetResult_Request__init(msg: *mut Deliver_GetResult_Request) -> bool;
    fn warehouse_interfaces__action__Deliver_GetResult_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Deliver_GetResult_Request>, size: usize) -> bool;
    fn warehouse_interfaces__action__Deliver_GetResult_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Deliver_GetResult_Request>);
    fn warehouse_interfaces__action__Deliver_GetResult_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Deliver_GetResult_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<Deliver_GetResult_Request>) -> bool;
}

// Corresponds to warehouse_interfaces__action__Deliver_GetResult_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Deliver_GetResult_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,

}



impl Default for Deliver_GetResult_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !warehouse_interfaces__action__Deliver_GetResult_Request__init(&mut msg as *mut _) {
        panic!("Call to warehouse_interfaces__action__Deliver_GetResult_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Deliver_GetResult_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { warehouse_interfaces__action__Deliver_GetResult_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { warehouse_interfaces__action__Deliver_GetResult_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { warehouse_interfaces__action__Deliver_GetResult_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Deliver_GetResult_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Deliver_GetResult_Request where Self: Sized {
  const TYPE_NAME: &'static str = "warehouse_interfaces/action/Deliver_GetResult_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__warehouse_interfaces__action__Deliver_GetResult_Request() }
  }
}


#[link(name = "warehouse_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__warehouse_interfaces__action__Deliver_GetResult_Response() -> *const std::ffi::c_void;
}

#[link(name = "warehouse_interfaces__rosidl_generator_c")]
extern "C" {
    fn warehouse_interfaces__action__Deliver_GetResult_Response__init(msg: *mut Deliver_GetResult_Response) -> bool;
    fn warehouse_interfaces__action__Deliver_GetResult_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Deliver_GetResult_Response>, size: usize) -> bool;
    fn warehouse_interfaces__action__Deliver_GetResult_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Deliver_GetResult_Response>);
    fn warehouse_interfaces__action__Deliver_GetResult_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Deliver_GetResult_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<Deliver_GetResult_Response>) -> bool;
}

// Corresponds to warehouse_interfaces__action__Deliver_GetResult_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Deliver_GetResult_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::super::action::rmw::Deliver_Result,

}



impl Default for Deliver_GetResult_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !warehouse_interfaces__action__Deliver_GetResult_Response__init(&mut msg as *mut _) {
        panic!("Call to warehouse_interfaces__action__Deliver_GetResult_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Deliver_GetResult_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { warehouse_interfaces__action__Deliver_GetResult_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { warehouse_interfaces__action__Deliver_GetResult_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { warehouse_interfaces__action__Deliver_GetResult_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Deliver_GetResult_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Deliver_GetResult_Response where Self: Sized {
  const TYPE_NAME: &'static str = "warehouse_interfaces/action/Deliver_GetResult_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__warehouse_interfaces__action__Deliver_GetResult_Response() }
  }
}






#[link(name = "warehouse_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__warehouse_interfaces__action__Deliver_SendGoal() -> *const std::ffi::c_void;
}

// Corresponds to warehouse_interfaces__action__Deliver_SendGoal
#[allow(missing_docs, non_camel_case_types)]
pub struct Deliver_SendGoal;

impl rosidl_runtime_rs::Service for Deliver_SendGoal {
    type Request = Deliver_SendGoal_Request;
    type Response = Deliver_SendGoal_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__warehouse_interfaces__action__Deliver_SendGoal() }
    }
}




#[link(name = "warehouse_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__warehouse_interfaces__action__Deliver_GetResult() -> *const std::ffi::c_void;
}

// Corresponds to warehouse_interfaces__action__Deliver_GetResult
#[allow(missing_docs, non_camel_case_types)]
pub struct Deliver_GetResult;

impl rosidl_runtime_rs::Service for Deliver_GetResult {
    type Request = Deliver_GetResult_Request;
    type Response = Deliver_GetResult_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__warehouse_interfaces__action__Deliver_GetResult() }
    }
}


