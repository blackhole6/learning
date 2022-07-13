{% load static from static %}
<!DOCTYPE html>
<html>
<head>

    <meta charset="UTF-8">

    <title>{{ job_info.2 }}</title>
    <style>
        em {
            color:red;
            font-style:normal;
        }

    </style>
    <link rel="stylesheet" href="{% static '3/html5-css3-bar-chart/css/style.css' %}" media="screen" type="text/css" />
    <link rel="stylesheet" href="{% static '3/html5-css3-bar-chart/css/normalize.css' %}" media="screen" type="text/css" />
    <script src="{% static '3/html5-css3-bar-chart/js/prefixfree.min.js' %}"></script>
    <link rel="stylesheet" href="{% static 'tui/bootstrap.css' %}" media="screen" type="text/css" />
    <link rel="stylesheet" href="{% static 'tui/bootstrap-theme.css' %}" media="screen" type="text/css" />


</head>
<body>
    <style>
    a:visited {
        color: black;
    }
    </style>
    <nav class="navbar navbar-inverse navbar-fixed-top">
        <div class="container">
            <div class="navbar-header">
                <a class="navbar-brand" href="http://127.0.0.1:8000">主页</a>
            </div>

            <div class="navbar-collapse collapse" role="navigation">
                <ul class="nav navbar-nav navbar-right">
                    <li><a href="http://127.0.0.1:8000/admin" target="_blank">管理后台</a></li>
                </ul>
                <ul class="nav navbar-nav navbar-right">
                    <li style="width: 100px;"><a href="http://127.0.0.1:8000/fenxi" target="_blank">图表分析</a></li>
                </ul>
            </div>
        </div> 
    </nav>

    
    <!-- 总栏 -->
    <div class="main-div" style="border-bottom:solid 0px #BDBDBD;border-left:solid 0px #BDBDBD;border-right:solid 0px #BDBDBD;width:1100px;background-color:white;margin-top:50px;padding: 0;position:relative;margin-left: auto;margin-right: auto;">
        <!-- 左栏 -->
        <div class="left-div" style="float: left;">
            <div style="margin-left:0px; margin-top:30px;margin-left:80px">
                <div>
                    <!-- 标题 -->
                    <h2>{{job_info.2}}</h2>
                </div>
                <br>
                <div style="max-width:600px; font-size:13px;margin-bottom:0; word-wrap:break-word; overflow: hidden; ">
                    <!-- 公司 -->
                    <h3>公司：{{ job_info.3 }}</h3>
                    <br>
                    <!-- 招聘需求 -->
                    {% for demand in job_info.1 %}
                    <p style="font-size:18px">{{ demand }}</p>
                    <br>
                    {% endfor %}
                    <!-- 关键词 -->
                    <h3>专业技能KEYWORDS:</h3>
                    <div>
                        {% for kw in keywords %}
                        <span onclick="show_courses(this);" style="border:1px solid #eee;color: #666;font-size: 18px;line-height: 12px;margin-right: 10px;padding:7px 10px;line-height:36px;white-space: nowrap;">{{ kw }}</span>
                        {% endfor %}

                    </div>
                    <h3>可迁移性技能KEYWORDS:</h3>
                    <div>

                        <span onclick="window.location='https://www.icourse163.org/columns/1207451204.htm?from=searchPage'"style="border:1px solid #eee;color: #666;font-size: 18px;line-height: 12px;margin-right: 10px;padding:7px 10px;line-height:36px;white-space: nowrap;">{{ "表达沟通能力" }}</span><!--{{ kw }}-->
                        <span onclick="window.location='https://www.icourse163.org/columns/1207549208.htm?from=searchPage'"style="border:1px solid #eee;color: #666;font-size: 18px;line-height: 12px;margin-right: 10px;padding:7px 10px;line-height:36px;white-space: nowrap;">{{ "组织管理能力" }}</span><!--{{ kw }}-->
                        <span onclick="window.location='https://www.icourse163.org/course/XAUAT-1206021805?from=searchPage'"style="border:1px solid #eee;color: #666;font-size: 18px;line-height: 12px;margin-right: 10px;padding:7px 10px;line-height:36px;white-space: nowrap;">{{ "问题解决能力" }}</span><!--{{ kw }}-->
                        <span onclick="window.location='https://www.icourse163.org/columns/1206272236.htm?from=searchPage'"style="border:1px solid #eee;color: #666;font-size: 18px;line-height: 12px;margin-right: 10px;padding:7px 10px;line-height:36px;white-space: nowrap;">{{ "良好的人际关系能力" }}</span><!--{{ kw }}-->
                        <span onclick="window.location='https://www.icourse163.org/columns/1205927209.htm?from=searchPage'"style="border:1px solid #eee;color: #666;font-size: 18px;line-height: 12px;margin-right: 10px;padding:7px 10px;line-height:36px;white-space: nowrap;">{{ "学习与自我提高能力" }}</span><!--{{ kw }}-->


                    </div>
                    <h3>自我管理KEYWORDS:</h3>
                    <div>

                        <span onclick="show_courses1(this);" style="border:1px solid #eee;color: #666;font-size: 18px;line-height: 12px;margin-right: 10px;padding:7px 10px;line-height:36px;white-space: nowrap;">{{ "自我心态管理" }}</span><!--{{ kw }}-->
                        <span onclick="window.location='https://www.icourse163.org/course/HIT-1002545001?from=searchPage'"style="border:1px solid #eee;color: #666;font-size: 18px;line-height: 12px;margin-right: 10px;padding:7px 10px;line-height:36px;white-space: nowrap;">{{ "自我心智管理" }}</span><!--{{ kw }}-->
                        <span onclick="window.location='https://www.icourse163.org/columns/1449735445.htm?from=searchPage'"style="border:1px solid #eee;color: #666;font-size: 18px;line-height: 12px;margin-right: 10px;padding:7px 10px;line-height:36px;white-space: nowrap;">{{ "自我人际管理" }}</span><!--{{ kw }}-->
                        <span onclick="window.location='https://www.icourse163.org/course/DUFE-1206459842?from=searchPage'"style="border:1px solid #eee;color: #666;font-size: 18px;line-height: 12px;margin-right: 10px;padding:7px 10px;line-height:36px;white-space: nowrap;">{{ "自我角色管理" }}</span><!--{{ kw }}-->

                    </div>
                    <!-- 招聘信息URL -->
                    <br>
                    <a href="{{ job_info.0 }}" target="_blank">{{ job_info.0 }}</a>
                </div>
            </div>
        

        </div>

        <!-- 右栏 -->
        <div class="right-div" style="float: right;width: 600px;border-left: 0px solid #BDBDBD;overflow: auto;position: fixed;margin-left:750px;margin-top:50px; ">
            <div class="validate-div">
                <form action="https://www.imooc.com/">
                    <input type="text"  placeholder="输入关键词" >
                    <input type="submit" value="搜索">
                </form>
                
                <h3>课程推荐</h3>
                <!-- <div class="validation">
                    <span class="" id="validate_span" onclick="show_courses(this);">获取验证码</span>
                </div> -->
            </div>
            <br>
            <div id="show_course" >
                
                
            </div>
            <br>

            <div>
                <h4>意见反馈</h4>
                <textarea rows="8" cols="40"></textarea>
                <br>
                
                <button type="button">提交</button>
            </div>
            
            
        </div>
           <!-- 右栏 -->
        <div class="right-div" style="float: right;width: 600px;border-left: 0px solid #BDBDBD;overflow: auto;position: fixed;margin-left:750px;margin-top:50px; ">
            <div class="validate-div">
                <form action="https://www.icourse163.org/">
                    <input type="text"  placeholder="输入关键词" >
                    <input type="submit" value="搜索">
                </form>

                <h3>课程推荐</h3>
                <!-- <div class="validation">
                    <span class="" id="validate_span" onclick="show_courses(this);">获取验证码</span>
                </div> -->
            </div>
            <br>
            <div id="show_course1" >


            </div>
            <br>

            <div>
                <h4>意见反馈</h4>
                <textarea rows="8" cols="40"></textarea>
                <br>

                <button type="button">提交</button>
            </div>


        </div>

    </div>
    <script src="{% static '3/html5-css3-bar-chart/js/jquery.js' %}"></script>

    <script src="{% static '3/html5-css3-bar-chart/js/index.js' %}"></script>
    <script type="text/javascript">
    var course_index = {{ course_index|safe }};
    // 添加<h2>标签
    var course_div = document.getElementById("show_course");
    var h3 = document.createElement("h3");
    var num = 5;
    course_div.append(h3)
    for(var i=0;i<num;i++){
        var a = document.createElement("a");
        a.setAttribute("target","_blank")
        course_div.append(a)
        var br = document.createElement("br");
        course_div.append(br)

    }
    var course_index1 = {{ course_index1|safe }};
    // 添加<h2>标签
    var course_div1 = document.getElementById("show_course1");
    var h3 = document.createElement("h3");
    var num1 = 5;
    course_div.append(h3)
    for(var i=0;i<num1;i++){
        var a = document.createElement("a");
        a.setAttribute("target","_blank")
        course_div1.append(a)
        var br = document.createElement("br");
        course_div1.append(br)

    }


    //发送验证码函数
    function show_courses(e){
        // 获取a标签列表、span标签内容
        var a = course_div.getElementsByTagName("a")
        var kw = $(e).html();
        h3.innerHTML = kw;

        // 判断course_index是否有kw，不包含则设置a内容为空
        if(!!course_index[kw]){
            courses = course_index[kw];
        }
        else
        {   
            for(var i=0;i<5;i++ ) {
                a[i].innerHTML="";
                a[i].setAttribute("href", "");

            }
            return 0;
        } 

        // 设置a内容
        var len=Object.keys(courses).length;
        len = len<num?len:num;
        
        var count = 0;
        for(var key in courses) {
            a[count].innerHTML=key;
            a[count].setAttribute("href", courses[key]);
            count += 1;
            if (count>=len){
                break;}
        }
        // var count = 4;
        // for(var key in courses) {
        //     a[count].innerHTML=key;
        //     a[count].setAttribute("href", courses[key]);
        //     count -= 1;
        //     if (count<0){
        //         break;}
        // }



    }


    function show_courses1(e){
        // 获取a标签列表、span标签内容
        var a = course_div1.getElementsByTagName("a")
        var kw = $(e).html();
        h3.innerHTML = kw;

        // 判断course_index是否有kw，不包含则设置a内容为空
        if(!!course_index1[kw]){
            courses = course_index1[kw];
        }
        else
        {
            for(var i=0;i<5;i++ ) {
                a[i].innerHTML="";
                a[i].setAttribute("href", "");

            }
            return 0;
        }

        // 设置a内容
        var len=Object.keys(courses).length;
        len = len<num?len:num;

        var count = 0;
        for(var key in courses) {
            a[count].innerHTML=key;
            a[count].setAttribute("href", courses[key]);
            count += 1;
            if (count>=len){
                break;}
        }
        // var count = 4;
        // for(var key in courses) {
        //     a[count].innerHTML=key;
        //     a[count].setAttribute("href", courses[key]);
        //     count -= 1;
        //     if (count<0){
        //         break;}
        // }



    }
   
</script>
</body>
</html>
