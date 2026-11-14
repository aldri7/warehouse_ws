#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to warehouse_interfaces__msg__DeliveryStatus

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DeliveryStatus {

    // This member is not documented.
    #[allow(missing_docs)]
    pub robot_id: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub package_count: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub battery: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub state: u8,

}

impl DeliveryStatus {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const STATE_IDLE: u8 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const STATE_MOVING: u8 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const STATE_DELIVERING: u8 = 2;

}


impl Default for DeliveryStatus {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::DeliveryStatus::default())
  }
}

impl rosidl_runtime_rs::Message for DeliveryStatus {
  type RmwMsg = super::msg::rmw::DeliveryStatus;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        robot_id: msg.robot_id.as_str().into(),
        package_count: msg.package_count,
        battery: msg.battery,
        state: msg.state,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        robot_id: msg.robot_id.as_str().into(),
      package_count: msg.package_count,
      battery: msg.battery,
      state: msg.state,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      robot_id: msg.robot_id.to_string(),
      package_count: msg.package_count,
      battery: msg.battery,
      state: msg.state,
    }
  }
}


