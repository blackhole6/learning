const app = getApp()
Page({
  
  formSubmit: function (e) {
    wx.request({
      url: 'http://192.168.46.129:8090/info',
      data: {
        'name': e.detail.value.name,
        'study_id': e.detail.value.study_id,
        'sex': e.detail.value.sex,
        'heath': e.detail.value.heath,
        'QR': e.detail.value.QR,
        'temperature': e.detail.value.temperature
      },
      method:'POST',
      header: {
        'Content-Type': 'application/x-www-form-urlencoded'
      },
      success: function (res) {
        console.log(res.data)
        app.globalData.name=e.detail.value.name
      }
    })
  },/*
  formSubmit: function (e) {
    console.log('form发生了submit事件，提交数据：', e.detail.value)
    app.globalData.info_form=e.detail.value
  },*/
  formReset: function () {
    console.log('form发生了reset事件')
    console.log(app.globalData.userInfo["nickName"])
  }
})