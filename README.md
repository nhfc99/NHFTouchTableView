# NHFTouchTableView
<h2>介绍</h2>
<p>为UITableView上边加上Touch的响应事件</p>
<h2>安装</h2>
<ul>
<li>pod 'DeviceInfo'</li>
<li>手动下载然后将文件夹拖至工程中即可</li>
</ul>

<h2>使用方法</h2>
- (void)createTableVeiw {
    TouchTableView *mainTableView = [[TouchTableView alloc] initWithFrame:CGRectMake(0, mainTableViewMinY, CGRectGetWidth(self.frame), [DeviceInfo ScreenSize].height- mainTableViewMinY-(MARGIN*2+bottomViewHeight)) style:UITableViewStylePlain];</br>
    [_mainTableView setSeparatorStyle:UITableViewCellSeparatorStyleNone];</br>
    [_mainTableView setBackgroundColor:[UIColor clearColor]];</br>
    [_mainTableView setDelegate:self];</br>
    [_mainTableView setDataSource:self];</br>
    [_mainTableView setBounces:false];</br>
    _mainTableView.touchDelegate = self;</br>
    [self setExtraCellLineHidden:_mainTableView];</br>
    [self addSubview:_mainTableView];</br>
}
    
- (void)setExtraCellLineHidden:(UITableView *)tableView {</br>
    UIView *view = [UIView new];</br>
    view.backgroundColor = [UIColor clearColor];</br>
    [tableView setTableFooterView:view];</br>
  }</br>
</br>
........
</br>
- (void)touchesBegan:(NSSet<UITouch *> *)touches withEvent:(UIEvent *)event {</br>
    [super touchesBegan:touches withEvent:event];</br>
    //触摸事件</br>
}</br>

- (void)touchesEnded:(NSSet<UITouch *> *)touches withEvent:(UIEvent *)event {</br>
    [super touchesEnded:touches withEvent:event];</br>
    //触摸事件</br>
}</br>

- (void)tableView:(UITableView *)tableView touchesEnded:(NSSet *)touches withEvent:(UIEvent *)event {</br>
    [super touchesEnded:touches withEvent:event];</br>
    //触摸事件</br>
}</br>
