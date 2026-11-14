#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};




// Corresponds to warehouse_interfaces__srv__LoadPackage_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct LoadPackage_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub package_id: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub weight: f32,

}



impl Default for LoadPackage_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::LoadPackage_Request::default())
  }
}

impl rosidl_runtime_rs::Message for LoadPackage_Request {
  type RmwMsg = super::srv::rmw::LoadPackage_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        package_id: msg.package_id.as_str().into(),
        weight: msg.weight,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        package_id: msg.package_id.as_str().into(),
      weight: msg.weight,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      package_id: msg.package_id.to_string(),
      weight: msg.weight,
    }
  }
}


// Corresponds to warehouse_interfaces__srv__LoadPackage_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct LoadPackage_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub accepted: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub total_packages: u8,

}



impl Default for LoadPackage_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::LoadPackage_Response::default())
  }
}

impl rosidl_runtime_rs::Message for LoadPackage_Response {
  type RmwMsg = super::srv::rmw::LoadPackage_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        accepted: msg.accepted,
        message: msg.message.as_str().into(),
        total_packages: msg.total_packages,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      accepted: msg.accepted,
        message: msg.message.as_str().into(),
      total_packages: msg.total_packages,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      accepted: msg.accepted,
      message: msg.message.to_string(),
      total_packages: msg.total_packages,
    }
  }
}






#[link(name = "warehouse_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__warehouse_interfaces__srv__LoadPackage() -> *const std::ffi::c_void;
}

// Corresponds to warehouse_interfaces__srv__LoadPackage
#[allow(missing_docs, non_camel_case_types)]
pub struct LoadPackage;

impl rosidl_runtime_rs::Service for LoadPackage {
    type Request = LoadPackage_Request;
    type Response = LoadPackage_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__warehouse_interfaces__srv__LoadPackage() }
    }
}


